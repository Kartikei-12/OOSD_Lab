//Author: Kartikei Mittal
//ID: 2017KUCP1032
//Date: 18-November-2018
//Assignment question 1
#include<iostream>
#include<string>
#include<exception>
    using namespace std;

int64_t power(int a)
{
    int64_t ans=1;
    for(int i=0; i<a; ++i)
        ans *= 10;
    return ans;
}

int getIntFromChar(char a)
{
    switch(a)
    {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
    }
}

string getMonthString(int month)
{
    switch(month)
    {
        case 1: return "January";
        case 2: return "Febuary";
        case 3: return "March";
        case 4: return "Aprail";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10: return "October";
        case 11: return "November";
        case 12: return "December";
        default: 
            cout<<"G"<<month<<"G"<<endl;
            return "GotIt";
    }
}

class MonthError {
public:
    string a=0;
    MonthError(string b): a(b) {;}
    string what() {
        return " "+a;
    }
};

class DateError {
public:
    string a=0;
    DateError(string b): a(b) {;}
    string what() {
        return " "+a;
    }
};

int str2num(string original)
{
    int ans=0;    
    for(int i=0; i<original.size(); ++i)
    {
        int a = original.at(i);
        if(a<48 || a>57)
            throw DateError("Enter pure number.");
        else
            ans = (ans*10) + getIntFromChar(original.at(i));
    }
    return ans;
}

class Date
{
    int day, month;
public:
    Date(int a=0, int b=0): day(a), month(b) {;}

    string parseOutputDate() {
        return getMonthString(month) + " " + to_string(day);
    }

    void parseInputDate(string s)
    {
        string a1 = s.substr(s.rfind(':')+1), a2;
        a2.assign(
            s.begin(),
            s.begin()+s.rfind(':')
        );
        if(a1.size()<=0 || a2.size()<=0)
            throw DateError("You entered blank");
        int A1=str2num(a1), A2=str2num(a2);
        if(A1>=1 && A1<=12)
        {
            month=A1;
            if(A2>=1 && A2<=31)
                day=A2;
            else
                throw DateError("Enter valid date");
        }
        else if(A2>=1 && A2<=12)
        {
            month=A2;
            if(A1>=1 && A1<=31)
                day=A1;
            else
                throw MonthError("Enter valid month.");
        }
        else
            throw DateError("Enter valid date.");
        if(month==2 && day>29)
            throw DateError("Date is not valid for febuary");
        if((month==4 || month==6 || month==9 || month==11) && day>30)
            throw DateError("Date is not valid for given month");;
    }

    friend ostream &operator<<(ostream &output, const Date &D);
    friend istream &operator>>(istream  &input, const Date &D);
};

ostream &operator<<(ostream &output, Date &D)
{ 
    output<<D.parseOutputDate();
    return output;
}

istream &operator>>(istream  &input, Date &D)
{
    string s="";
    cout<<"Enter date: ";
    input>>s;
    D.parseInputDate(s);
    return input;
}

int main(int argc, char const *argv[])
try
{
    while(true)
    {
        Date d;
        cin>>d;
        cout<<"This is same as "<<d<<endl;
        char c=' ';
        cout<<"\nAgain?(y/n):";
        cin>>c;
        if(c!='y' && c!='Y')
            break;
    }
    return 0;
}
catch(MonthError &m) {
    cerr<<"Month Error: You enetered invalid month. as ,"<<m.what()<<endl;
}
catch(DateError &d) {
    cerr<<"Month Error: You enetered invalid date. as ,"<<d.what()<<endl;
}
catch(exception &e) {
    cerr<<"Internal library error: "<<e.what();
}
catch(...) {
    cerr<<"Unknown exception.";
}