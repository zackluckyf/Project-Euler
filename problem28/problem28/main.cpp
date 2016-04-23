//
//  main.cpp
//  problem28
//
//  Created by Zack Fanning on 12/13/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Starting with the number 1 and moving to the right in a clockwise direction a
 5 by 5 spiral is formed as follows:
 
 21 22 23 24 25
 20  7  8  9 10
 19  6  1  2 11
 18  5  4  3 12
 17 16 15 14 13
 
 It can be verified that the sum of the numbers on the diagonals is 101.
 
 What is the sum of the numbers on the diagonals in a 1001 by 1001 spiral formed in the same way?
*/

#include <iostream>
#include <chrono>
#include <math.h>

int main(int argc, const char * argv[])
{
    auto start = std::chrono::system_clock::now();
    long long unsigned total(1);
    for (int i = 0; i < 500; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            total += pow((2*i) + 1, 2.0)+2*(i+1)*(j+1);
        }
    }
    std::cout << total << std::endl;
    
   
    
    
    auto end = std::chrono::system_clock::now();
    auto elapsed = end - start;
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << elapsed.count() << "ms" << '\n';
    return 0;
}














