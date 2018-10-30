#include<iostream>
#include<string>
#include<exception>
    using namespace std;

class my_Error
{
    int found_in_line;
    string message, found_in_file;
public:
    my_Error(string s="", string f="", int a=0)
    {
        message = s;
        found_in_file = f;
        found_in_line = a;
    }

    string what()  {
        return message+" File: "+
               found_in_file+" Line: " +
               to_string(found_in_line);
    }
};

class Account
{
protected:
    string num;
    double balance;
public:
    Account(string n="", double b=0){
        num = n;
        balance = b;
    }

    virtual void withdraw(double amount) = 0;
    
    void deposit(double amount) {
        balance += amount;
    }
    double show_balance() 
    {
        cout<<"Account : "<<num<<endl
            <<"Balance: "<<balance<<endl;
    }
};

class Credit:public Account
{
    double limit;
public:
    Credit(double l=0, string n="", double b=0): Account(n, b){
        limit = l;
    }

    void withdraw(double amount) {
        if((balance-amount) >= (-1*limit))
        { 
            balance -= amount;
            cout<<"Withdrawing: "<<amount<<endl;
        }
        else
            throw my_Error("Exceding credit limit.", __FILE__, __LINE__);
    }
};

class Deposit:public Account
{
    double fees;
public:
    Deposit(double f=0, string n="", double b=0): Account(n, b){
         fees = f;
    }

    void withdraw(double amount) {
        if((balance-(amount+fees)) >= 0)
        {
            balance -= (amount+fees);
            cout<<"Withdrawing: "<<amount+fees<<endl;
        }
        else
            throw my_Error("Insifficient Balance.", __FILE__, __LINE__);
    }
};

int main(int argc, char const *argv[])
try
{
    Account *C = new Credit(100, "Credit", 100);//Credit 100 limit
    Account *D = new Deposit(10, "Deposit", 100);//Deposit 10 fees
    
    C->show_balance();
    D->show_balance();
    cout<<endl;
    C->withdraw(150);
    D->withdraw(20);
    cout<<endl;
    C->show_balance();
    D->show_balance();
    cout<<endl;
    C->withdraw(60);
    D->withdraw(70);
    cout<<endl;
    C->show_balance();
    D->show_balance();

    return 0;
}
catch(my_Error &e) {
    cerr<<e.what();
}
catch(exception &e) {
    cerr<<e.what()<<endl;
}
catch(...) {
    cerr<<"Unknown Exception"<<endl;
}