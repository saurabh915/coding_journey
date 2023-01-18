#include<iostream>
using namespace std;
template <class T1=int, class T2=float>//this are the default data types
class harry
{
    public:
    T1 a;
    T2 b;
    harry(T1 x, T2 y)
    {
        a=x;
        b= y;
    }
 void display(){
     cout<<a<<endl<<b;
 }
};
int main()
{
    harry <>h(1,1.23);
    h.display();
}