//
//  main.cpp
//  problem191
//
//  Created by Zack Fanning on 12/11/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 A particular school offers cash rewards to children with good attendance and punctuality.
 If they are absent for three consecutive days or late on more than one occasion 
 then they forfeit their prize.
 
 During an n-day period a trinary string is formed for each child consisting of
 L's (late), O's (on time), and A's (absent).
 
 Although there are eighty-one trinary strings for a 4-day period that can be formed,
 exactly forty-three strings would lead to a prize:
 
 OOOO OOOA OOOL OOAO OOAA OOAL OOLO OOLA OAOO OAOA
 OAOL OAAO OAAL OALO OALA OLOO OLOA OLAO OLAA AOOO
 AOOA AOOL AOAO AOAA AOAL AOLO AOLA AAOO AAOA AAOL
 AALO AALA ALOO ALOA ALAO ALAA LOOO LOOA LOAO LOAA
 LAOO LAOA LAAO
 
 How many "prize" strings exist over a 30-day period?
*/

#include <iostream>
#include <math.h>

int main(int argc, const char * argv[])
{
    long long numStrings = pow(3, 30.0);
    std::cout << numStrings << std::endl;
    
    
    return 0;
}
