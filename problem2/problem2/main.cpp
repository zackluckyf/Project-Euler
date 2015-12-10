//
//  main.cpp
//  problem2
//
//  Created by Zack Fanning on 12/8/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// By considering the terms in the Fibonacci sequence whose values do not exceed four million,
// find the sum of the even-valued terms.

double fibonacci(long long total);

int main(int argc, const char * argv[])
{
    long long total = fibonacci(0);
    cout << total << endl;
    return 0;
}

double fibonacci(long long total)
{
    int i = 1;
    int j = 1;
    int k(0);
    while (k < 4000000)
    {
        k = i + j;
        i = j;
        j = k;
        if (k % 2 == 0)
        {
            total += k;
        }
    }
    return total;
}