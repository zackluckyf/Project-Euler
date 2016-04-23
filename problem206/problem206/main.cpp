//
//  main.cpp
//  problem206
//
//  Created by Zack Fanning on 1/10/16.
//  Copyright © 2016 Zackluckyf. All rights reserved.
//

/*
 Find the unique positive integer whose square has the form 1_2_3_4_5_6_7_8_9_0,
 where each “_” is a single digit.
 */

#include <iostream>
#include <chrono>
#include <math.h>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

int main(int argc, const char * argv[])
{
    auto start = std::chrono::system_clock::now();
    long lowerBound = sqrt(1000000000000000000);
    long upperBound = sqrt(2000000000000000000);
    for (long i = lowerBound; i < upperBound; i++)
    {
        long long squared = i*i;
        std::string square = std::to_string(squared);
        if (square[0] == '1' && square[2] == '2' && square[4] == '3' && square[6] == '4' && square[8] == '5' && square[10] == '6' && square[12] == '7' && square[14] == '8' && square[16] == '9' && square[18] == '0')
        {
            std::cout << i << std::endl;
        }
        
    }
    
    
    auto end = std::chrono::system_clock::now();
    auto elapsed = end - start;
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << elapsed.count() << "ms" << '\n';
    return 0;
}