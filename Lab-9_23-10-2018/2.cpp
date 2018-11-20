#include<iostream>
#include<math.h>
    using namespace std;

class Rectangle
{
    double x, y;
public:
    Rectangle(double a=0, double b=0)
    {
        x=a;
        y=b;
    }

    double get_x(){
        return x;
    }

    double get_y(){
        return y;
    }

    void display() {
        cout<<"x: "<<x<<" y: "<<y<<endl;
    }
};

class Polar
{
    double r, theta;
public:
    Polar(double a=0, double b=0)
    {
        r=a;
        theta=b;
    }

    Polar(Rectangle R)
    {
        r = sqrt(R.get_x()*R.get_x()+R.get_y()*R.get_y());
        theta = atan(R.get_y()/R.get_x());  
    }

    operator Rectangle()
    {
        Rectangle t(r*cos(theta), r*sin(theta));
        return t;
    }

    void display()
    {
        cout<<"r: "<<r<<" theta: "<<theta<<endl;
    }
};


int main(int argc, char const *argv[])
{
    Polar P(5, 11/7), P1;
    Rectangle R(5, 5), R1;
    P1 = R;
    R1 = P;
    cout<<"To polar:"<<endl;
    P1.display();
    cout<<"To rec:"<<endl;
    R1.display();
    return 0;
}
