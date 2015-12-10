//
//  main.cpp
//  problem16
//
//  Created by Zack Fanning on 12/9/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
 
 What is the sum of the digits of the number 2^1000?
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

int main(int argc, const char * argv[])
{
    double digits = pow(2, 1000);
    //printf("%lf\n", digits);
    
    /* 
     gives us this number
     
     107150860718626732094842504906000181056140481170553360744375038837035
     10511249361224931983788156958581275946729175531468251871452856923140435
     9845775746985748039345677748242309854210746050623711418779541821530464
     74983581941267398767559165543946077062914571196477686542167660429831652
     624386837205668069376
    */
    
    std::string number = "10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376";
    long total(0);
    for (int i = 0; i < number.length(); i++)
    {
        total += number[i]-48;
    }
    std::cout << total << std::endl;
    return 0;
}