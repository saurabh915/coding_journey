#include<iostream>
using namespace std;
class complex 
{
    int a;
    int b;
    public:
 complex(void);//default constructor

 void printnumber()
{
    cout<<"your complex number is "<<a<<" + "<<b<<"i";
}
};
complex::complex(void)
{
    a=10;
    b=3;
}

int main()
{
complex c1;
c1.printnumber();
}