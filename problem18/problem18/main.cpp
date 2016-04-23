//
//  main.cpp
//  problem18
//
//  Created by Zack Fanning on 12/9/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Find the maximum total from top to bottom of the triangle below:
 
               75
              95 64
             17 47 82
            18 35 87 10
           20 04 82 47 65
          19 01 23 75 03 34
         88 02 77 73 07 63 67
        99 65 04 28 06 16 70 92
       41 41 26 56 83 40 80 70 33
      41 48 72 33 47 32 37 16 94 29
     53 71 44 65 25 43 91 52 97 51 14
    70 11 33 28 77 73 17 78 39 68 17 57
   91 71 52 38 17 14 91 43 58 50 27 29 48
  63 66 04 68 89 53 67 30 73 16 69 87 40 31
 04 62 98 27 23 09 70 98 73 93 38 53 60 04 23
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

long max(long x, long y);

int main(int argc, const char * argv[])
{
    std::ifstream infile;
    infile.open("list.txt");
    
    //Check for error
    if (infile.fail())
    {
        std::cerr << "Error opening file" << std::endl;
        exit(1);
    }
    
    std::string line;
    int num;
    if (infile.is_open())
    {
        int lines(0);
        while (getline(infile,line))
        {
            lines++;
        }
        std::vector<std::vector<int>> triangle;
        int value = 0;
        triangle.resize(lines, std::vector<int>(lines, value));
        infile.clear();
        infile.seekg(0, std::ios::beg);
        for (int i = 0; i < lines; i++)
        {
            for (int j = 0; j < lines; j++)
            {
                if (j <= i)
                {
                    infile >> num;
                    triangle[i][j] = num;
                }
            }
        }
        for (int i = lines - 1; i > 0; i--)
        {
            for (int j = 0; j < lines - 1; j++)
            {
                {
                    triangle[i-1][j] += max(triangle[i][j], triangle[i][j+1]);
                }
            }
        }
        std::cout << triangle[0][0] << std::endl;
    }
    
    else
    {
        std::cout << "Unable to open file";
    }

    
    
    return 0;
}

long max(long x, long y)
{
    if (x > y)
    {
        return x;
    }
    else
        return y;
}






