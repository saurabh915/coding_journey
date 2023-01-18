#include<iostream>
using namespace std;  
 int count=0;
class num
{
 
    public :

     num(){
         count++;
         cout<<"this is the time when constructor is called for the object number "<<count;

     }
 ~num(){
     cout<<"This is the time when destructor is called for object number"<<count<<endl;
count-- ;}
};
int main()
     {num n1;
    cout<<"we are inside our main function"<<endl;
    cout<<"creating first object n1"<<endl;
    
    {
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout <<"exiting this block";
    
    }//after exiting this curly brakets the destructor is called 
    //destructor is called when there is no use of object after that
    cout<<"back to main"<<endl;


}