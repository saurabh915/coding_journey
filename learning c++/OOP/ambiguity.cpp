#include<iostream>
// when we derive aclass from two base classes and if two base classes have same function
//and which is inherited by derived class and then if we call that same function 
//then we have to resolve ambiquity.
//this is for multilevel inheritence and
//for multiple inheritance ambiguity will do overriting with each other.  
using namespace std;
class base1
{
    public:
    void greet()
    {
        cout<<"how are you?? from base1";
    }
 
};
class base2
{
 public:
 void greet()
 {
     cout<<"kasa hais ?? from base2 "<<endl;
 }
};
class derived : public base1,base2{
    int a;
    public:
    void greet(){
        // base1::greet();//whenever greet is called for greet method now greet will be called from base1 class;
                       //because of 'base1::'greet();
                       cout<<"this is derived";
    }
};
int main()
{
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived obj;
    obj.greet();

}