//
//  main.cpp
//  problem20
//
//  Created by Zack Fanning on 12/10/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 n! means n × (n − 1) × ... × 3 × 2 × 1
 
 For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
 and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
 
 Find the sum of the digits in the number 100!
*/

#include "iostream"
#include "vector"

int n,remainder,sum;
int main ()
{
    std::vector <int> digits(5000);
    n=100;
    digits[0]=1;
    digits[1]=1;
    for (int k=2;k<n+1;k++) {
        for (int i=1;i<=digits[0];i++) {
            digits[i]=digits[i]*k+remainder;
            remainder=0;
            if (digits[i]>9) {
                remainder=digits[i]/10;
                digits[i]%=10;
                if (i==digits[0])
                    digits[0]++;
            }
        }
    }
    for (int i=digits[0];i>=1;i--)
        sum+=digits[i];
    std::cout<<sum << std::endl;
}