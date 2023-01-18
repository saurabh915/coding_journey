
 //1.  in this program we pointed base class pointer to derived class object


//we can access base class objects  by pointing to detrived  class form baase class pointer

//2. if we create a derived class pointer and point it to derived class
//then we can acess derived class properties.
//derived 

#include<iostream>
using namespace std;
class baseclass
{
    
    public:
    int var_base;
   void display()
   {
       cout<<"value of base is "<<var_base;

   }
 
};

class derivedclass: public  baseclass{
public:
int var_derived;
void display(){
     cout<<"Dvalue of base is "<<var_derived;
     cout<<"Dvalue of base is "<<var_base;
}
};
int main()
{
baseclass * base_pointer;//here it is base class pointer hence it can access base objects
baseclass base_obj;
derivedclass derived_obj;
base_pointer =&derived_obj;
base_pointer->var_base =34;//accesing base variables
// base_pointer->var_derived; //will throw error as it is base class pointer and we cannot point to derived class ojects 
base_pointer->display();


derivedclass* derived_class_pointer;//here it is derived class pointer hence it can access derived objects
derived_class_pointer = &derived_obj;
derived_class_pointer->var_derived=67;
derived_class_pointer->var_base =45;
derived_class_pointer->display();
return 0;
}