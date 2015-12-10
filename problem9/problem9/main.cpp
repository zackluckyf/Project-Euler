//
//  main.cpp
//  problem9
//
//  Created by Zack Fanning on 12/9/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[])
{
    for (int i = 200; i < 350; i++)
    {
        for (int j = i; j < 450; j++)
        {
            for (int k = j; k < 550; k++)
            {
                if (i + j + k == 1000 && pow(k, 2.0) == (pow(i, 2.0) + pow(j, 2.0)))
                {
                    std::cout << i*j*k << std::endl;
                }
            }
        }
    }
    return 0;
}
