//
//  main.cpp
//  problem22
//
//  Created by Zack Fanning on 12/11/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//


/*
 Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over 
 five-thousand first names, begin by sorting it into alphabetical order. Then working out the 
 alphabetical value for each name, multiply this value by its alphabetical position in the 
 list to obtain a name score.
 
 For example, when the list is sorted into alphabetical order, COLIN, which is worth
 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. 
 So, COLIN would obtain a score of 938 × 53 = 49714.
 
 What is the total of all the name scores in the file?
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

int main(int argc, const char * argv[])
{
    std::ifstream infile;
    infile.open("p022_names.txt");

    
    if (infile.fail())
    {
        std::cerr << "File failed to open" << std::endl;
        exit(1);
    }
    std::stringstream buffer;
    buffer << infile.rdbuf();
    std::string name = buffer.str();
    std::string temp;
    std::vector<std::string> names;
    /*
     std::string s = "scott>=tiger>=mushroom";
     std::string delimiter = ">=";
     
     size_t pos = 0;
     std::string token;
     while ((pos = s.find(delimiter)) != std::string::npos) {
     token = s.substr(0, pos);
     std::cout << token << std::endl;
     s.erase(0, pos + delimiter.length());
     }
     std::cout << s << std::endl;
    */
    std::string delimiter = ",";
    size_t pos = 0;
    while ((pos = name.find(delimiter) != std::string::npos))
    {
        temp = name.substr(0, pos);
        name.erase(0, pos + delimiter.length());
        names.push_back(temp);
    }
    
    
    for (int i = 0; i < names.size(); i++)
    {
        if (names[i] > names [i+1])
        {
            temp = names[i+1];
            names[i+1] = names[i];
            names[i] = temp;
        }
        for (int j = i; j > 0; j--)
            {
                if (names[j] < names [j+1])
                {
                    temp = names[j+1];
                    names[j+1] = names[j];
                    names[j] = temp;
                }
            }
    }
    for (int i = 0; i < names.size(); i++)
    {
        std::cout << names[i] << " ";
    }
    
    return 0;
}
