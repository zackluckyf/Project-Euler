//
//  main.cpp
//  problem35
//
//  Created by Zack Fanning on 12/14/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//


/*
 The number, 197, is called a circular prime because all rotations of the 
 digits: 197, 971, and 719, are themselves prime.
 
 There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.
 
 How many circular primes are there below one million?
*/

#include <iostream>
#include <chrono>
#include <math.h>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

//bool function checking wheter integers are prime
bool prime(int x);

int main(int argc, const char * argv[])
{
    bool truth = true;
    int count;
    std::string rotation;
    auto start = std::chrono::system_clock::now();
    for (int i = 3; i < 1000001; i+=2)
    {
        if (prime(i))
        {
            truth = true;
            //convert int to string
            rotation = std::to_string(i);
            //size -1 to account for only need one rotation less than num of digits
            for (int j = 0; j < rotation.size()-1; j++)
            {
                //rotate the string
                rotation = rotation.substr(1).append(rotation.substr(0,1));
                //convert the string back to int
                int value = atoi(rotation.c_str());
                //evaluates each rotation for primeness
                if (prime(value) == false)
                {
                    truth = false;
                }
            }
            if (truth == true)
            {
                count+= 1;
            }
        }
    }
    //displays num of circular primes
    std::cout << count+1 << std::endl;
    auto end = std::chrono::system_clock::now();
    auto elapsed = end - start;
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << elapsed.count() << "ms" << '\n';
    return 0;
}

bool prime(int x)
{
    double root = sqrt(x);
    for (int i = 2; i <= root; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}











