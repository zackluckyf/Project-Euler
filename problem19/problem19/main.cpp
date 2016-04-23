//
//  main.cpp
//  problem19
//
//  Created by Zack Fanning on 12/10/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 You are given the following information, but you may prefer to do some research for yourself.
 
 1 Jan 1900 was a Monday.
 Thirty days has September,
 April, June and November.
 All the rest have thirty-one,
 Saving February alone,
 Which has twenty-eight, rain or shine.
 And on leap years, twenty-nine.
 A leap year occurs on any year evenly divisible by 4, 
 but not on a century unless it is divisible by 400.
 How many Sundays fell on the first of the month during the twentieth century 
 (1 Jan 1901 to 31 Dec 2000)?
*/

#include <iostream>
#include <string>
#include <vector>


int main(int argc, const char * argv[])
{
    int september_april_june_november(30);
    int february(28);
    int january_august_march_may_july_october_december(31);
    // january 1 1901 was a tuesday
    int weekdays(2);
    int count(0);
    for (int i = 1901; i < 2001; i++)
    {
        for (int j = 1; j < 13; j++)
        {
            if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
            {
                for (int k = 0; k < january_august_march_may_july_october_december; k++)
                {
                    if (k == 0 && weekdays % 7 == 0)
                    {
                        count++;
                    }
                    weekdays++;
                }
            }
            else if (j == 4 || j == 6 || j == 9 || j == 11)
            {
                for (int k = 0; k < september_april_june_november; k++)
                {
                    if (k == 0 && weekdays % 7 == 0)
                    {
                        count++;
                    }
                    weekdays++;
                }
            }
            else
            {
                if (i % 4 == 0)
                {
                    february = 29;
                }
                for (int k = 0; k < february; k++)
                {
                    if (k == 0 && weekdays % 7 == 0)
                    {
                        count++;
                    }
                    weekdays++;
                }
            }
        }
        february = 28;
    }
    
    std::cout << count << std::endl;
    
    return 0;
}
