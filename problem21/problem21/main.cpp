//
//  main.cpp
//  problem21
//
//  Created by Zack Fanning on 12/11/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Let d(n) be defined as the sum of proper divisors of n 
 (numbers less than n which divide evenly into n).
 If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair 
 and each of a and b are called amicable numbers.
 
 For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; 
 therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.
 
 Evaluate the sum of all the amicable numbers under 10000.
*/

#include <iostream>

int main(int argc, const char * argv[])
{
    long total(0);
    int array[10000];
    int sum(0);
    for (int i = 0; i < 10000; i++)
    {
        sum = 0;
        for (int j = 1; j<=i/2+1; j++)
        {
            if ((i+1)%j == 0)
            {
                sum+= j;
            }
            array[i] = sum;
        }
    }
    for (int i = 0; i < 10000; i++)
    {
        for (int j = i+1; j < 10000; j++)
        {
            if (i+1 == array[j] && array[i] == j+1)
            {
                total += (i+1 + j + 1);
            }
        }
    }
    std::cout << total << std::endl;
    return 0;
}
