//
//  main.cpp
//  problem1
//
//  Created by Zack Fanning on 12/8/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//


// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    long total(0);
    for (int i = 1; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            total += i;
            cout << total << endl;
        }
    }
    return 0;
}
