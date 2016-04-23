//
//  main.cpp
//  problem67
//
//  Created by Zack Fanning on 12/10/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

long max(long x, long y);

int main(int argc, const char * argv[])
{
    std::ifstream infile;
    infile.open("p067_triangle.txt");
    
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
