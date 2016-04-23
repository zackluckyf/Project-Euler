//
//  main.cpp
//  problem31
//
//  Created by Zack Fanning on 12/13/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 In England the currency is made up of pound, £, and pence, p, and 
 there are eight coins in general circulation:
 
 1p, 2p, 5p, 10p, 20p, 50p, £1 (100p) and £2 (200p).
 It is possible to make £2 in the following way:
 
 1×£1 + 1×50p + 2×20p + 1×5p + 1×2p + 3×1p
 How many different ways can £2 be made using any number of coins?
*/

#include <iostream>
#include <chrono>
#include <vector>
#include <math.h>
#include <vector>
#include <string>
#include <set>

int change(int x, int array[], int values);

int main(int argc, const char * argv[])
{
    auto start = std::chrono::system_clock::now();
    // count = 1 for the $2 coin
    int count(0);
    int array[] = {200, 100, 50, 20, 5, 2, 1};
    int values = 8;
    std::cout << change(count, array, values) << std::endl;
    auto end = std::chrono::system_clock::now();
    auto elapsed = end - start;
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << elapsed.count() << "ms" << '\n';
    return 0;
}

int change(int x, int array[], int values)
{
    if (x<0)
    {
        return 0;
    }
    if (x == 0 || values == 1)
    {
        return 1;
    }
    else
    {
        return change(x, array, values-1) + change(x - array[values-1], array, values);
    }
}











