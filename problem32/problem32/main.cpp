//
//  main.cpp
//  problem32
//
//  Created by Zack Fanning on 12/13/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n 
 exactly once; for example, the 5-digit number, 15234, is 1 through 5 pandigital.
 
 The product 7254 is unusual, as the identity, 39 × 186 = 7254, containing multiplicand,
 multiplier, and product is 1 through 9 pandigital.
 
 Find the sum of all products whose multiplicand/multiplier/product identity can be written as 
 a 1 through 9 pandigital.
 
 HINT: Some products can be obtained in more than one way so be sure to only include
 it once in your sum.
*/


#include <iostream>
#include <chrono>
#include <vector>
#include <math.h>
#include <string>
#include <set>
#include <algorithm>

int main(int argc, const char * argv[])
{
    auto start = std::chrono::system_clock::now();
    bool truth = true;
    std::vector<std::string> numbers;
    std::string temp;
    std::vector<int> pandigital;
    int match(0);
    for (int i = 2; i <100; i++)
    {
        for (int j = 2; j < 10000; j++)
        {
            truth = true;
            if (i * j < 10000 && i*j > 1000)
            {
                std::string multiplicand = std::to_string(i);
                std::string multiplier = std::to_string(j);
                std::string product = std::to_string(i*j);
                std::string num = multiplicand+multiplier+product;
                std::sort(num.begin(), num.end());
                for (int i = 0; i < 9; i++)
                {
                    if((num[i]-48) != i+1)
                    {
                        truth = false;
                    }
                }
                if (truth == true)
                {
                    // used this to see duplicates which are 5346 and 5796
                    std::cout << i << " " << j << " " << i*j << std::endl;
                    pandigital.push_back(i*j);
                }
            }
        }
    }
    int duplicates = 5346 + 5796;
    int total(0);
    int length = pandigital.size();
    for ( int i = 0 ; i < length; i++ )
    {
        total += pandigital[i];
    }
    std::cout << total - duplicates << std::endl;
    auto end = std::chrono::system_clock::now();
    auto elapsed = end - start;
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << elapsed.count() << "ms" << '\n';
    return 0;
}
