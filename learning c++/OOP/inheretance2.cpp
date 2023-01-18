#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default and is not inheritable
    protected:
    int d;
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;//data1 canbe accessed by set data function it is from base class
    data2 = 20;//data2 can be accessed by set data function --||--
}

int Base::getData1()
{
   
    return data1;
}

int Base::getData2()
{
    return data2;
}


class Derived : public Base ///here inheritance is declared
{ // Class is being derived publically//as it is derived publically the private members of base class will be remain private and public will not be inherited and protected members will be remain protected
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    data3 = data2 * getData1();//as data2 is public it will remain public in derived class and as data3 is protected it will not inherited 
     cout<<"value of d is "<<d;
}

void Derived :: display()
{
    cout << "Value of data 1 is " << getData1();
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}
int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}
