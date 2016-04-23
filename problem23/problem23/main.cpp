//
//  main.cpp
//  problem23
//
//  Created by Zack Fanning on 12/12/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 A perfect number is a number for which the sum of its proper divisors is exactly equal 
 to the number. For example, the sum of the proper divisors of 28 would be
 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.
 
 A number n is called deficient if the sum of its proper divisors is less than n 
 and it is called abundant if this sum exceeds n.
 
 As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number 
 that can be written as the sum of two abundant numbers is 24. By mathematical analysis,
 it can be shown that all integers greater than 28123 can be written as the sum of two 
 abundant numbers. However, this upper limit cannot be reduced any further by analysis 
 even though it is known that the greatest number that cannot be expressed as the 
 sum of two abundant numbers is less than this limit.
 
 Find the sum of all the positive integers which cannot be written 
 as the sum of two abundant numbers.
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

int main(int argc, const char * argv[])
{
    int max = 28123;
    int array[100];
    // abundant numbers less than 28123
    std::vector<int> nums;
    // less than28123
    std::vector<int> allNums;
    int temp(0);
    for (int i = 0; i < max + 1; i++)
    {
        int count = 0;
        for (int j = 0; j <= i/2 +1; j++)
        {
            if ((i+1) % (j+1) == 0)
            {
                array[count] = j+1;
                count++;
            }
        }
        for (int k = 0; k < count; k++)
        {
            temp += array[k];
        }
        if (temp > i+1)
        {
            nums.push_back(i+1);
        }
        temp = 0;
        memset(array, 0, 100);
    }
    for (int i = 0; i < max; i++)
    {
        allNums.push_back(i+1);
    }
    long total(0);
    for(int i = 0; i < nums.size(); ++i)
    {
        for (int j = i; j < nums.size(); ++j)
        {
            if (nums[i]+nums[j] > max)
            {
                continue;
            }
            for (int k = i+j; k < max; k++)
            {
                if (nums[i]+nums[j] == allNums[k])
                {
                    allNums[k] = 0;
                }
            }
        }
    }
    for (int i = 0; i < max; i++)
    {
        total += allNums[i];
    }
    std::cout << total << std::endl;
    return 0;
}
