//
//  main.cpp
//  problem10
//
//  Created by Zack Fanning on 12/9/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[])
{
    long long sum(2);
    bool prime = true;
    for (int i = 3; i < 2000000; i+= 2)
    {
        prime = true;
        for (int j = 1; j <= sqrt(i); j+=2)
        {
            if (i % j == 0 && j != 1)
            {
                prime = false;
            }
        }
        if (prime == true)
        {
            sum += i;
        }
    }
    
    std::cout << sum << "\n";
    
    return 0;
}
