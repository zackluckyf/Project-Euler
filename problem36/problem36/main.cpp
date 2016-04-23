//
//  main.cpp
//  problem36
//
//  Created by Zack Fanning on 12/14/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 The decimal number, 585 = 1001001001 (binary), is palindromic in both bases.
 
 Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.
 
 (Please note that the palindromic number, in either base, may not include leading zeros.)
*/

#include <iostream>
#include <chrono>
#include <math.h>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

std::string convert(unsigned int val);

bool palindrome(std::string num);

int main(int argc, const char * argv[])
{
    auto start = std::chrono::system_clock::now();
    long sum(0);
    for (int i = 0; i < 1000000; i++)
    {
        std::string temp = std::to_string(i+1);
        if (palindrome(temp) == true)
        {
            temp = convert(i+1);
            if (palindrome(temp) ==true)
            {
                sum += i+1;
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

std::string convert(unsigned int val)
{
    unsigned int mask = 1 << (sizeof(int) * 8 - 1);
    std::string num;
    for(int i = 0; i < sizeof(int) * 8; i++)
    {
        if( (val & mask) == 0 )
            num.push_back('0');
        else
            num.push_back('1');
        
        mask  >>= 1;
    }
    return num;
}

bool palindrome(std::string num)
{
    bool truth = true;
    int length = num.size();
    for (int i = 0; i < length/2; i++)
    {
        if (num[i] != num[length-(i+1)])
        {
            truth = false;
        }
    }
    if (truth == true)
    {
        return  true;
    }
    else
    {
        return false;
    }
}



