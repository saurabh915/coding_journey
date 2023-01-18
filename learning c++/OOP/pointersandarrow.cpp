#include<iostream>
using namespace std;
class complex
{
    int real , imaginary;
    public:
    void getdata(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;

    }
 void setdata(int a, int b){
       real =a;
       imaginary=b;
 }
};
int main()
{
    // creating objects using pointers 
    complex *ptr = new complex;//here i think by using new to class  we can create  object of class and access the address of object without giving him name 
    (*ptr).setdata(1,34);
    (*ptr).getdata();  //if we want to access the value by any object then if we want to access it by data like this 
  complex *ptr1 = new complex;
    ptr1->setdata(1,34); //if we want to access the value by any object then if we want to access it by address like this 
    ptr1->getdata();
//creating array of objects 
complex *point = new complex[4];
point->setdata(43,45);
point->getdata();
//similary for next object
(point+1)->setdata(34,47);
(point+1)->getdata();
}