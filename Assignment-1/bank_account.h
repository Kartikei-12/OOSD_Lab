//File containing class of bank account
namespace assignment
{
    class BankAccount
    {
        ld withdrawal_am, balance;
        string name, account_no;
    
    public:
        BankAccount() { ;}
        BankAccount(ld a, ld b, string c, string d)
        {
            withdrawal_am = a;
            balance = b;
            name = c;
            account_no = d;
        }

        void getA()
        {
            cout<<"Enter name of account holder: ";
            getline(cin, name);
            cout<<"Enter account number";
            cin>>account_no;
            cout<<"Enter balance ammount: ";
            cin>>balance;
            cout<<"Enter withdrawal ammount: ";
            cin>>withdrawal_am;
        }

        void showA()
        {
            cout<<"Account Number: "<<account_no<<endl
                <<"Account holder name: "<<name<<endl
                <<"Balance: "<<balance<<endl
                <<"Withdrawal ammount: "<<withdrawal_am<<endl;
        }

        void deposit(ld a) {
            balance += a;
        }

        void withdraw(ld a)
        {
            if(a < balance)
            {
                cout<<"Withdrawing ammount: "<<a<<endl;
                balance -= a;
                cout<<"Balance after withdrawing: "<<balance<<endl;
            }
            else
                cout<<"Insufficient balance by "<<a-balance<<" ammount."<<endl;
        }
    };
}