#include<iostream>

using namespace std;
class complex;

class complex{
    int a,b;
    public:
    void setNumber(int n1,int n2 )
    {
        a =n1;
        b = n2;
    }
        friend complex sumcomplex(complex ,complex );//this statement giving permission to sumcomplex function to use the
                                                         //private members of this class

    void printNumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;

    }
};

complex sumcomplex(complex o1,complex o2)//this is complex data type as it is returning object of class complex';
{
    complex o3;
    o3.setNumber((o1.a +o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex c1,c2,sum;//sum is of class data type
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();
    sum = sumcomplex(c1,c2);//here copying of object is taking place
    sum.printNumber();
}