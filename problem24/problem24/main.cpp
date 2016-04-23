//
//  main.cpp
//  problem24
//
//  Created by Zack Fanning on 12/12/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation
 of the digits 1, 2, 3 and 4. If all of the permutations are listed numerically or alphabetically, 
 we call it lexicographic order. The lexicographic permutations of 0, 1 and 2 are:
 
 012   021   102   120   201   210
 
 What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
*/

#include <iostream>
#include <string>

int factorial(int x);

int main(int argc, const char * argv[])
{
    std::string digits = "0123456789";
    int count = 1000000;
    int x = 9;
    int y = 1;
    int z = 0;
    while (x > 0)
    {
        if(count > factorial(x) > 0)
        {
            count -= factorial(x);
            char temp = digits[y];
            digits[y] = digits[z];
            digits[z] = temp;
            y++;
        }
        else
        {
            x--;
            z++;
            y = z + 1;
        }
    }
    std::cout << digits;

    return 0;
}

int factorial(int x)
{
    if (x==1)
    {
        return 1;
    }
    else
        return x*factorial(x-1);
}









