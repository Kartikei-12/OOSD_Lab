//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Date: 11-September-2018
//File Input/Output methods

#include<iostream>
#include<fstream>
#include<string>
    using namespace std;

string readline(fstream &file)
{
    string ans="";
    getline(file, ans);
    return ans;
}

int main(int argc, char const *argv[])
{
    fstream F("test.txt", ios::in);
    while(!F.eof())
        cout<<readline(F)<<endl;
    F.close();   
    return 0;
}
