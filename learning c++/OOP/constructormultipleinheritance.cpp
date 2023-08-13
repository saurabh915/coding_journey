#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int a)   // :  data1(a)   //it is called initialization
    {                                                //  ^
        data1 = a;  ///isteat of doing this.....we can>>>^
    }
    void print_data1()
    {
        cout << "value of data1" << data1;
    }
};

class base2
{
    int data2;

public:
    base2(int b)
    {
        data2 = b;
    }
    void print_data2()
    {
        cout << "value of data2" << data2;
    }
    void printprivate(){
        cout<<"this is data 2"<<data2<<endl;
       
    }
};

class derived : public base1, public base2
{
    int derived1, derived2;

  public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)//here is initialization of parameters of base1 and base 2
    {
        derived1 = c;
        derived2 = d;
    }
    void print_data()
    {           

        cout << "value of data1" << derived1<<endl;
        cout << "value of data1" << derived2<<endl;
    }
};
    int main()
    {
        derived d1(1, 2, 3, 4);
        d1.print_data();
       d1.print_data1();
       d1.printprivate();

        return 0;
    }