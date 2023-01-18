#include<iostream>
using namespace std;

class A{
    private:
    int x;
    int y;
};
class B:public A{
    public:
    int z;
    void show(int * k)
    {
        cout << "x ="<<*k <<"y = "<<*(k+1)
        << "z = "<<*(k+2);
    }
};

int main()
{
    B b;
    int* p;
    p =&b.z;//p is pointing to object
    *p =1;
    p--;
    *p = 2;
    p--;
    *p =3;
    b.show(p);
}