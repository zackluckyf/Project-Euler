//
//  main.cpp
//  problem17
//
//  Created by Zack Fanning on 12/9/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 If the numbers 1 to 5 are written out in words: one, two, three, four, five, 
 then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
 
 If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, 
 how many letters would be used?
 
 NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) 
 contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. 
 The use of "and" when writing out numbers is in compliance with British usage.
*/

#include <iostream>

int main(int argc, const char * argv[])
{
    long numLetters(0);
    // all 1's added
    numLetters = numLetters + 3 * 190;
    // all 2's added
    numLetters = numLetters + 3 * 190;
    // all 3's added
    numLetters = numLetters + 5 * 190;
    // all 4's added
    numLetters = numLetters + 4 * 190;
    // all 5's added
    numLetters = numLetters + 4 * 190;
    // all 6's added
    numLetters = numLetters + 3 * 190;
    // all 7's added
    numLetters = numLetters + 5 * 190;
    // all 8's added
    numLetters = numLetters + 5 * 190;
    // all 9's added
    numLetters = numLetters + 4 * 190;
    // all 10's added
    numLetters = numLetters + 3 * 10;
    // all 11's added
    numLetters = numLetters + 6 * 10;
    // all 12's added
    numLetters = numLetters + 6 * 10;
    // all 13's added
    numLetters = numLetters + 8 * 10;
    // all 14's added
    numLetters = numLetters + 8 * 10;
    // all 15's added
    numLetters = numLetters + 7 * 10;
    // all 16's added
    numLetters = numLetters + 7 * 10;
    // all 17's added
    numLetters = numLetters + 9 * 10;
    // all 18's added
    numLetters = numLetters + 8 * 10;
    // all 19's added
    numLetters = numLetters + 8 * 10;
    // all 20's added
    numLetters = numLetters + 6 * 100;
    // all 30's added
    numLetters = numLetters + 6 * 100;
    // all 40's added
    numLetters = numLetters + 5 * 100;
    // all 50's added
    numLetters = numLetters + 5 * 100;
    // all 60's added
    numLetters = numLetters + 5 * 100;
    // all 70's added
    numLetters = numLetters + 7 * 100;
    // all 80's added
    numLetters = numLetters + 6 * 100;
    // all 90's added
    numLetters = numLetters + 6 * 100;
    // all 100's added
    numLetters = numLetters + 7 * 900;
    // all and's added
    numLetters = numLetters + 3 * 891;
    // one thousand added
    numLetters = numLetters + 11;
    
    std::cout << numLetters << std::endl;
    
    return 0;
}
