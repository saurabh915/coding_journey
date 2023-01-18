//constructors with parameters and constructors are data type less they do not return any value

#include<iostream>
using namespace std;
class complex 
{
    int a;
    int b;
    public:
 complex(int , int);//default constructor

 void printnumber()
{
    cout<<"your complex number is "<<a<<" + "<<b<<"i";
}
};
complex::complex(int x, int y)
{
    a=10;
    b=3;
    cout<<"a+b is  %d"<<x+y;
   
}

int main()
{
    //implicit call
complex c1(5,7);//parameterized constructor;
c1.printnumber();
// explicit call
complex b = complex(3,8);
b.printnumber();
}