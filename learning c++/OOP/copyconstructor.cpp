//copy constructor will copy one object to another


#include<iostream>
using namespace std;
class number 
{
    int a;
    public:
      number(){}
 number(int num){
     a= num;
 }
 number(number &obj){//defination of copy constructor
       cout<<"copy constructor is called";
     a= obj.a;
 }
 void display(){
  
     cout<<"the number for this object is "<<a<<endl;
 }
 
};

 

int main()
{
    number x,y,z(45),z2;
    z.display();
    number z1(z);//copy constructor will be invoked it will copy z data into z1;
    z1.display();
    z2 =z1;//copy constructor will not be involked
    number z3 = z;////copy constructor will be invoked
    z3.display();
}