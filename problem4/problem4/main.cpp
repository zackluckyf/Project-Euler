//
//  main.cpp
//  problem4
//
//  Created by Zack Fanning on 12/8/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 A palindromic number reads the same both ways. 
 The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 
 Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    int k;
    int max(0);
    for (int i = 800; i < 1000; i++)
    {
        for (int j = 800; j < 1000; j++)
        {
            k = i * j;
            string num = to_string(k);
            if (num[0] == num[5] && num[1] == num[4] && num[2] == num[3] && k > max)
            {
                max = k;
            }
        }
    }
    cout << max << endl;
    
    
    
    return 0;
}
