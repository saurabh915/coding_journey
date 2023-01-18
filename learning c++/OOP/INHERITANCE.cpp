#include<iostream>
using namespace std;
//Base class
class employee
{
    public:
    float salary;
    int id;
    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
   employee(){}//defult constructor
};

//derived class syntax
// class {{dirived-class-name}} : {{visibility-mode}}{{base-class-name}}
// {
//     class members/methods/etc
// }
// 1.  default visibility mode is private
// 2.   visibility mode public ===public members of base class will become public members of derived class
// 3.  private visibility mode === public members of base class will become private of derived class
// 4. private members do not inherited
// 5. we have to create default constructor in base class
class programmer :public employee
{
    public:
  
    programmer(int inpid )
    {
        id = inpid;
    }
    int languagecode = 6;
    void getdata()
    {
        cout<<id<<endl;
    }
};

int main()
{
    employee saurabh(1), rohit(2);
    cout<<saurabh.salary<<endl;
    cout<<rohit.salary;
    programmer skillf(1);
    cout<<skillf.languagecode;//accessing data from languagecode variable
    skillf.getdata();
   cout<< skillf.id;
}