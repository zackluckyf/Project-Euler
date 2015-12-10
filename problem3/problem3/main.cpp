//
//  main.cpp
//  problem3
//
//  Created by Zack Fanning on 12/8/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

// What is the largest prime factor of the number 600851475143 ?

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    short temp(0);
    long long n = 600851475143, i;
        
    for (i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            temp = i;
            n = n/i;
        }
    }
        
    cout << temp << endl;

    return 0;
}
