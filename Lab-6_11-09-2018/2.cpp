//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Date: 11-September-2018
//File Input/Output methods

#include<iostream>
#include<fstream>
    using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    fstream F("test.txt", ios::out | ios::trunc);
    F<<12;
    F.close();
    F.open("test.txt", ios::in);
    if(F.is_open())
        cout<<"File opened successfully:"<<endl;
    else
        cout<<"File cannot be opened:"<<endl;    
    F>>a;
    if(a == 12)
        cout<<"File read succesfull."<<endl;
    else
        cout<<"File read failed."<<endl;   
    F.close();

    string st = "Kartikei Mittal", st1;
    F.open("test.txt", ios::out | ios::trunc);
    F.write((char*)&st, sizeof(st));
    F.close();
    F.open("test.txt", ios::in);
    if(F.is_open())
        cout<<"File opened successfully again."<<endl;
    else
        cout<<"File cannot be opened:"<<endl;    
    F.read((char*)&st1, sizeof(st1));
    cout<<"Read data: "<<st1;
    F.close();
    return 0;
}
