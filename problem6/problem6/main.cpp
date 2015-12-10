//
//  main.cpp
//  problem6
//
//  Created by Zack Fanning on 12/9/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

// Find the difference between the sum of the squares of the first one
// hundred natural numbers and the square of the sum.

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[])
{
    int tempTotal(0);
    long long sumSquares(0), squareSums(0), total;
    for (int i = 1; i < 101; i++)
    {
        sumSquares += pow(i, 2.0);
        tempTotal += i;
    }
    squareSums = pow(tempTotal, 2.0);
    total = squareSums - sumSquares;
    cout << total << endl;
    return 0;
}
