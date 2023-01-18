<<<<<<< HEAD
=======
//here two base classes derive one class

>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
#include<iostream>
using namespace std;
class base1
{
 protected:
 int base1int;
 public:
 void set_base1int(int a){
     base1int =a;
     }
};
class base2
{
 protected:
 int base2int;
 public:
 void set_base2int(int a){
     base2int =a;
     }
};
class Derived: public base1, public base2
{
    public:
    void show(){
        cout<<"the value of base1"<<base1int<<endl;
        cout<<"the value of base2"<<base2int<<endl;
        cout<<"the value of addition is "<<base1int+base2int<<endl;
    }
};
int main()
{
    Derived harry;
    harry.set_base1int(21);
    harry.set_base2int(3);
     harry.show();
     return 0;
}