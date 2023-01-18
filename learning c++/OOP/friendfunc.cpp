#include <iostream>
// accesing private members of class by function in another class
using namespace std;
//sumrealcomplex is a function of calculator class which takes objects 
// of complex class 





class complex;//we have to do forward declaration when we have to access the data from private part to function of another class;










class calculator
{
public:

    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex); // declaring function which is using private arguments
};

 
class test
{
private:
    /* data */
public:
   int func1(complex, complex);
    ~test();
};


test::~test()
{
}




class complex
{
    int a, b;
  
public:
  friend int calculator::sumrealcomplex(complex o1, complex o2); // declaring sumrealcomplex of calculator as friend of complex class.
   friend int test::func1(complex o1, complex o2);
    friend class calculator;//declaring whole class as friend..now all functions from calculator can access complex class.

    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2); // this statement giving permission to sumcomplex function to use the
                                                       // private members of this class

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};







complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}



int calculator::sumrealcomplex(complex o1, complex o2)//this how we should define function which is in class
{
    return (o1.a + o2.a);//defing sumrealcomplex function which declared as friend of complex and declared in calculator class 
}

int test::func1(complex o1, complex o2)
{
 return (o1.a + o2.a);
}

int main()
{
    complex c1, c2, sum; // sum is of class data type
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);
    c1.printNumber();
    c2.printNumber();
    calculator calc;
    test t1;
    int res = calc.sumrealcomplex(c1,c2);
    int res2 = t1.func1(c1,c2);
    cout<<"result is :  "<<res;
     cout<<"result is :  "<<res2;
}