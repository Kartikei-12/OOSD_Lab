//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Date: 25-September-2018
//coping file using rdbuffer
#include<iostream>
#include<fstream>
    using namespace std;

int main(int argc, char const *argv[])
{
    ifstream f1(__FILE__,ios::binary);
    ofstream f2("copy.txt", ios::out | ios::binary);
    f2<<f1.rdbuf();
    return 0;
}
