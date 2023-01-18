//taking addresses of objects and creating a function which is not related to any class but can access members of class by friend function. 

#include<iostream>
using namespace std;
class c2;

class c1
{
    int val;
    friend void exchange(  c1 & ,c2&);
    public:
    void indata(int a){
        val = a;
    }
    void display(void)
    {
        cout<<val<<endl;
    }
 
};


class c2
{
    int val2;
    friend void exchange( c1&, c2&);
    public:
    void indata(int a){
        val2 = a;
    }
    void display(void)
    {
        cout<<val2<<endl;
    }
 
};
void exchange(c1 &m,c2 &n)//taking addresses of objects like a and b 
{
    int tmp = m.val;
    m.val = n.val2;
    n.val2 = tmp;
    cout<<"swaping in in function"<<m.val<<n.val2<<endl;
}

int main()
{
   c1 a;
   a.indata(23);
   c2 b;
   b.indata(99);
 exchange(a,b);
 cout<<"after swapping in main function";  
 a.display();
 b.display(); 
    return 0;
}