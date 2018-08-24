#include<iostream>
#include<string>
    using namespace std;

#define ld long double
#include"bank_account.h"
    

int main(int argc, char const *argv[])
{
    int ch = 0;
    ld c = 0.0;

    assignment::BankAccount A[5];
    for(int i=0; i<5; ++i)
    {    
        A[i].getA();
        A[i].showA();

        cout<<endl<<"1. To deposit ammount."<<endl
                  <<"2. To withdraw from balance."<<endl
                  <<"3. To view account details."<<endl
                  <<"0. To exit."<<endl
                  <<"\tWhat would you like: ";
        cin>>ch;

        switch(ch)
        {
            case 1:            
                cout<<"\nEnter ammount to deposit: ";
                cin>>c;
                A[i].deposit(c);
                break;
            case 2:            
                cout<<"\nEnter ammount to withdraw: ";
                cin>>c;
                A[i].withdraw(c);
            case 3:
                A[i].showA();
            case 0:
                break;
            default:
                cout<<"\nInvalid Input.";
        }
    }

    return 0;
}
