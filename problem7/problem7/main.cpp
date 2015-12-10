//
//  main.cpp
//  problem7
//
//  Created by Zack Fanning on 12/9/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
 we can see that the 6th prime is 13.
 
 What is the 10,001st prime number?
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    int count = 1;
    int i = 3;
    bool prime = true;
    while (count < 10001)
    {
        prime = true;
        for (int j = 1; j <= sqrt(i); j+=2)
        {
            if (i % j == 0 && j!=1)
            {
                prime = false;
            }
        }
        i+=2;
        if (prime == true)
        {
            count++;
        }
    }
    cout << i-2 << endl;
    
    return 0;
}
