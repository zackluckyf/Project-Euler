//
//  main.cpp
//  problem34
//
//  Created by Zack Fanning on 12/14/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.
 
 Find the sum of all numbers which are equal to the sum of the factorial of their digits.
 
 Note: as 1! = 1 and 2! = 2 are not sums they are not included.
*/

#include <iostream>
#include <chrono>
#include <math.h>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

long factorals(int i);

int main(int argc, const char * argv[])
{
    auto start = std::chrono::system_clock::now();
    // total sum
    long long sum;
    for (long i = 10; i < 100000; i++)
    {
        // convert the integer to a string to evaluate
        std::string num = std::to_string(i);
        // sum of individual number's factorials
        long tempSum(0);
        // calculate each digits factorial and add them together
        for (int j = 0; j < num.size(); j++)
        {
            tempSum += factorals(num[j]-48);
        }
        // if the factorial sum equals the number add to the total sum
        if (tempSum == i)
        {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    
    auto end = std::chrono::system_clock::now();
    auto elapsed = end - start;
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << elapsed.count() << "ms" << '\n';
    return 0;
}

long factorals(int i)
{
    static const long lookup_table[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    return lookup_table[i];
}







