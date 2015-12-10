//
//  main.cpp
//  problem5
//
//  Created by Zack Fanning on 12/8/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 
 What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    long smallestNum(10000000);
    bool divisible = true;
    for (long i = 10000000; i > 1; i--)
    {
        divisible = true;
        for (int j = 2; j < 17; j++)
        {
            if (i % j != 0)
            {
                divisible = false;
            }
        }
        if (divisible == true && i < smallestNum)
        {
            smallestNum = i;
        }
    }
    cout << smallestNum*17*19 << endl;
    return 0;
}





