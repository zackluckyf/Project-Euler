//
//  main.cpp
//  problem27
//
//  Created by Zack Fanning on 12/13/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Euler discovered the remarkable quadratic formula:
 
 n² + n + 41
 
 It turns out that the formula will produce 40 primes for the consecutive values n = 0 to 39.
 However, when n = 40, 402 + 40 + 41 = 40(40 + 1) + 41 is divisible by 41, and certainly 
 when n = 41, 41² + 41 + 41 is clearly divisible by 41.
 
 The incredible formula  n² − 79n + 1601 was discovered, which produces 80 primes for 
 the consecutive values n = 0 to 79. The product of the coefficients, −79 and 1601, is −126479.
 
 Considering quadratics of the form:
 
 n² + an + b, where |a| < 1000 and |b| < 1000
 
 where |n| is the modulus/absolute value of n e.g. |11| = 11 and |−4| = 4
 
 Find the product of the coefficients, a and b, for the quadratic expression that produces
 the maximum number of primes for consecutive values of n, starting with n = 0.
*/

#include <iostream>
#include <math.h>
#include <chrono>

bool isPrime(int x);

int main(int argc, const char * argv[])
{
    auto start = std::chrono::system_clock::now();
    int aMax = 0, bMax = 0, nMax = 0;
    for (int a = -1000; a <= 1000; a++)
    {
        // guessing it's one of the biggest primes for b
        for(int b = 900; b <= 1000; b++)
        {
            int n = 0;
            while (isPrime(abs((n * n + a * n + b))))
            {
                n++;
            }
            
            if (n > nMax)
            {
                aMax = a;
                bMax = b;
                nMax = n;
            }
        }
    }
    std::cout << nMax << " " << aMax << " " << bMax << " " << aMax*bMax << std::endl;
    auto end = std::chrono::system_clock::now();
    auto elapsed = end - start;
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << elapsed.count() << "ms" << '\n';
    return 0;
}

bool isPrime(int x)
{
    bool truth = true;
    double root = sqrt(x);
    for (int i = 2; i <= root ; i++)
    {
        if (x%i == 0)
        {
            truth = false;
        }
    }
    if (truth == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}












