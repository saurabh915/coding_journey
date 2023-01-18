#include<iostream>
using namespace std;
class complex
{
 int a;
 int b;
 public:
 void setdata(int v1 ,int v2){
     a = v1;
     b = v2;
 }
 void printnumber(){
     cout<<"Your complex number is "<<endl<<a  <<" +"<<b<<"i";

 }
 void printnumberbysum( complex o1, complex o2)
 {
     a = o1.a + o2.a;
     b = o2.b + o2.b;
 }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.printnumber();
    
    c2.setdata(1,2);
    c2.printnumber();

   
    c3.printnumberbysum( c1, c2);//here is an object which takes arguments as objects;
    c3.printnumber();
}