//
//  main.cpp
//  problem33
//
//  Created by Zack Fanning on 12/14/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

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
    double product = 1;
    for (int i = 12; i < 100; i++)
    {
        for (int j = i+1; j < 100; j++)
        {
            if (i % 10 != 0 && j % 10 != 0)
            {
                double value = i*1.0/j;
                std::string iValue = std::to_string(i);
                std::string jValue = std::to_string(j);
                if (((iValue[0] -48)*1.0/(jValue[1] -48)) == i*1.0/j && iValue[1] == jValue[0])
                {
                    product *= i*1.0/j;
                }
            }
        }
    }
    std::cout << product << std::endl;
    
    
    
    
    
    auto end = std::chrono::system_clock::now();
    auto elapsed = end - start;
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << elapsed.count() << "ms" << '\n';
    return 0;
}