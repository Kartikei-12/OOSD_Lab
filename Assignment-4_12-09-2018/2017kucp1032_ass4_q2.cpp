//Date: 12 September 2018
//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Assignment-4 Question 2

#include<iostream>
#include<fstream>
    using namespace std;
int main(int argc, char const *argv[])
{
    char temp = '.';
    fstream fIn("fread.txt", ios::in | ios::binary),
            fOut("fwrite.txt", ios::out | ios::binary);
    while(!fIn.eof())
    {
        fIn.get(temp);
        fOut.put(temp);
    }
    fIn.close();
    fOut.close();
    return 0;
}
