#include<iostream>
using namespace std;
class A 
{
    int a;
    public:
//     void setdata(int a){  //instead of using void we can use A& and return the whole object to main and this object can be used to call getdata
// this ->a =a;
//     }


     A& setdata(int a){
       this ->a =a;//here to avoid confusion between to a's
        return *this;
    }
   void  getdata()
    {
        cout<<"value of a is "<<a;
          
    }
 
};
int main()
{
A a;
// a.setdata(6); use this if set data function is returning void
a.setdata(6).getdata();//as we passed the object with reference we return object here
a.getdata();
}