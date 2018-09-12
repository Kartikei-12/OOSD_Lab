//Date: 12 September 2018
//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Assignment-4 Question 1

#include<iostream>
#include<fstream>
#include<string>

void fileLines(size_t numOfLines = 0, std::string fileName="")
{
    std::string temp="";
    std::fstream f(fileName.c_str(), std::ios::in);
    if(f.is_open())
        for(int i=0; i<numOfLines && !f.eof(); ++i)
        {
            getline(f, temp);
            std::cout<<temp<<std::endl;
        }
    else
        std::cout<<"\n\nError opening file for read operation."<<std::endl;
    f.close();
}

int main(int argc, char const *argv[])
{
    fileLines(2, "test.txt");
    return 0;
}
