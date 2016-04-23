//
//  main.cpp
//  problem30
//
//  Created by Zack Fanning on 12/13/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Surprisingly there are only three numbers that can be written as the sum 
 of fourth powers of their digits:
 
 1634 = 1^4 + 6^4 + 3^4 + 4^4
 8208 = 8^4 + 2^4 + 0^4 + 8^4
 9474 = 9^4 + 4^4 + 7^4 + 4^4
 As 1 = 1^4 is not a sum it is not included.
 
 The sum of these numbers is 1634 + 8208 + 9474 = 19316.
 
 Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.
*/


#include <iostream>
#include <chrono>
#include <vector>
#include <math.h>
#include <vector>
#include <string>
#include <set>

int main(int argc, const char * argv[])
{
    std::string temp;
    long sum = 0;
    auto start = std::chrono::system_clock::now();
    for (long i = 1000; i<360000; i++)
    {
        long tempTotal = 0;
        temp = std::to_string(i);
        int length = temp.size();
        for (int j = 0; j < length; j++)
        {
            tempTotal += pow(temp[j]-48 , 5.0);
            if (tempTotal == i && j==length-1)
            {
                sum += i;
            }
        }
    }
    std::cout << sum << std::endl;
    
    auto end = std::chrono::system_clock::now();
    auto elapsed = end - start;
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << elapsed.count() << "ms" << '\n';
    return 0;
}















