//
//  main.cpp
//  problem15
//
//  Created by Zack Fanning on 12/9/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Starting in the top left corner of a 2×2 grid, and only being able to move to the right 
 and down, there are exactly 6 routes to the bottom right corner.
 
 How many such routes are there through a 20×20 grid?
 
*/



#include <iostream>
#include <cmath>
#include <iomanip>

long double factorial(long double x);

int main(int argc, const char * argv[])
{
    double lattice = factorial(40)/pow(factorial(20), 2.0);
    
    std::cout << std::setprecision(20) << lattice << std::endl;

    return 0;
}

long double factorial(long double x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        x = x * factorial(x - 1);
    }
    return x;
}