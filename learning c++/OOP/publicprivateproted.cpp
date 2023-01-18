#include<bits/stdc++.h>
using namespace std;
class base;
class base{
    private:
     int a=45;
    protected:
     int b = 46;
    
    public:
    //friend class derived;this is to access private members
     int c =47;
     void func();
     
};
void base::func(){
cout<<"value of private member"<<a<<endl;
cout<<"value of protected member"<<b<<endl;
cout<<"value of public member"<<c<<endl;
}

class derived :private base{
public:
void derfunc();
};

void derived::derfunc()
{
 cout<<"value of private member"<<a<<endl;   //private member is not accessible in derived class
cout<<"value of protected member"<<b<<endl;
cout<<"value of public member"<<c<<endl;

}
int main()
{
    base b1;
    // b1.b        *-*-*-*-protected and private members are inaccessible outside of class-*-*-*-*
    b1.func();
    derived d1;
//  d1.c =5;        c is public member of base class but it is derived privately so it becomes private
    d1.derfunc();
    return 0;
}
//conclustion
//public ,private ,protected members are accessible in same class
// private member is not accessible in publically,privatelly,protectedly  inherited class
//to access private members we have to use friend 