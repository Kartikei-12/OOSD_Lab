//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Date: 25-September-2018
//Exception handaling in file
#include<iostream>
#include<fstream>
    using namespace std;

void report()
{
    string s=__FILE__;
    s += "_out.cpp";
    ofstream f2(s.c_str(), ios::binary | ios::trunc);
    fstream f;
    f.open(__FILE__, ios::in);
    char c;
    if(f.is_open())
        while(!f.eof())
        {
            f.read((char*)&c, sizeof(c));
            f2.write((char*)&c, sizeof(c));
        }
    cout<<"\n\nrdstate "<<f.rdstate()<<endl
        <<"good "<<f.good()<<endl
        <<"fail "<<f.fail()<<endl
        <<"bad "<<f.bad()<<endl
        <<"is_open "<<f.is_open()<<endl
        <<"eof "<<f.eof();
    f<<"Hey";
    cout<<endl<<"bad "<<f.bad()<<endl;
}

int main(int argc, char const *argv[])
{
    report();
    return 0;
}
