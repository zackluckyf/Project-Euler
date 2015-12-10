//
//  main.cpp
//  problem14
//
//  Created by Zack Fanning on 12/9/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//


/*
 The following iterative sequence is defined for the set of positive integers:
 
 n → n/2 (n is even)
 n → 3n + 1 (n is odd)
 
 Using the rule above and starting with 13, we generate the following sequence:
 
 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
 It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. 
 Although it has not been proved yet (Collatz Problem), 
 it is thought that all starting numbers finish at 1.
 
 Which starting number, under one million, produces the longest chain?
 
 NOTE: Once the chain starts the terms are allowed to go above one million.
*/

#include <iostream>

void collatz(long x, int &count);

int main(int argc, const char * argv[])
{
    int tempCount(0);
    int count(0);
    int max(0);
    int num(0);
    for (long i = 1; i < 1000000; i++)
    {
        count = 0;
        collatz(i, count);
        tempCount = count;
        if (tempCount > max)
        {
            max = tempCount;
            num = i;
        }
    }
    std::cout << num << std::endl;
    return 0;
}

void collatz(long x, int &count)
{
    count++;
    if (x % 2 == 0)
    {
        collatz(x/2,count);
    }
    else if (x != 1)
    {
        collatz(3*x+1, count);
    }
    else
    {
        
    }
}












