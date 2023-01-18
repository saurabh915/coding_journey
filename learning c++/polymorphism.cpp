#include<iostream>
using namespace std;
class add
{
    public:
    
    void  addition(int a, int b)
    {
    cout <<"the sum is:"<< a + b <<endl;
    }
    string addition(string l, string m )
    {
        cout<<"the sum is:"<<l+m<<endl;
    }
};
int main()
{
    add obj1;
    obj1.addition(4,5);
    obj1.addition("hello  ","world");
    
   return 0; 

}


    

