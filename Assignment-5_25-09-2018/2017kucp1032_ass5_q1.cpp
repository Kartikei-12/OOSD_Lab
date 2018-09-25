#include<iostream>
#include<fstream>
#include<string>
    using namespace std;

int main(int argc, char const *argv[])
{
    char c;
    string s1, s2;
    ifstream f1("test1.txt"), f2("test2.txt");
    while(!f1.eof() && !f2.eof())
    {
        f1.read((char*)&c, sizeof(c));
        s1 += c;
        f2.read((char*)&c, sizeof(c));
        s2 += c;
    }
    while(!f1.eof())
    {
        f1.read((char*)&c, sizeof(c));
        s1 += c;
    }
    f1.close();
    while(!f2.eof())
    {
        f2.read((char*)&c, sizeof(c));
        s2 += c;
    }
    f2.close();

    cout<<"First file: \n\n"<<s1<<"\n\n\n"
        <<"Second File: \n\n"<<s2;
    return 0;
}
