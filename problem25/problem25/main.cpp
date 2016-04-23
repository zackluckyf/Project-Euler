//
//  main.cpp
//  problem25
//
//  Created by Zack Fanning on 12/13/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 The Fibonacci sequence is defined by the recurrence relation:
 
 Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.
 Hence the first 12 terms will be:
 
 F1 = 1
 F2 = 1
 F3 = 2
 F4 = 3
 F5 = 5
 F6 = 8
 F7 = 13
 F8 = 21
 F9 = 34
 F10 = 55
 F11 = 89
 F12 = 144
 The 12th term, F12, is the first term to contain three digits.
 
 What is the index of the first term in the Fibonacci sequence to contain 1000 digits?
*/

#include <iostream>
#include <math.h>

int main(int argc, const char * argv[])
{
    long double fibonacciRatio = (1.618);
    // d = b log a where d is number of digits b is power and a is base.
    // digits = 999 since log is base 10
    double power = 999/log10(fibonacciRatio);
    std::cout << power << " ";
    // add one to power for beginning ratio size
    power++;
    std::cout << power << std::endl;
    
    return 0;
}
