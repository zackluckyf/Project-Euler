//
//  main.cpp
//  problem26
//
//  Created by Zack Fanning on 12/13/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 A unit fraction contains 1 in the numerator. The decimal representation of the unit 
 fractions with denominators 2 to 10 are given:
 
 1/2	= 	0.5
 1/3	= 	0.(3)
 1/4	= 	0.25
 1/5	= 	0.2
 1/6	= 	0.1(6)
 1/7	= 	0.(142857)
 1/8	= 	0.125
 1/9	= 	0.(1)
 1/10	= 	0.1
 Where 0.1(6) means 0.166666..., and has a 1-digit recurring cycle. It can be seen that
 1/7 has a 6-digit recurring cycle.
 
 Find the value of d < 1000 for which 1/d contains the longest recurring cycle in 
 its decimal fraction part.
*/



#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <math.h>

int main(int argc, const char * argv[])
{
    std::vector<int> prime;
    bool truth = true;
    // noticed from the example that the largest repeating was also the largest prime
    // checked the top 50 for primes
    for (int i = 975; i < 1000; i+=2)
    {
        int upperBound = sqrt(i);
        for (int j = 3; j <= upperBound; j+=2)
        {
            if (i % j == 0)
            {
                truth = false;
            }
        }
        if (truth == true)
        {
            prime.push_back(i);
        }
        truth = true;
    }
    int size = prime.size();
    for (int i = 0; i < size; i++)
    {
        std::cout << prime[i] << std::endl;
    }
    /* 
     Tested on these, was successful with 983 :)
     977, 983, 991, 997
     */
    
    return 0;
}
