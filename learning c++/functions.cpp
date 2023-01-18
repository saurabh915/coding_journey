#include<iostream>
using namespace std;
int sum(int , int );
void  g(void);

int main()
{
    int num1, num2;
    cout<<"enter 1st number"<<endl;
    cin>>num1;
    cout<<"enter 2nd number"<<endl;
    cin>>num2;
    cout<< "the sum is"<<sum(num2,num1);
    g();
    return sum(num1, num2);
}
int sum(int a,int b)
{
    
    return a+b;
}

void g()
{
    cout<<"\n hello,master"; 
}