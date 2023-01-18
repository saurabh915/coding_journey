
//new is used to allocate memory to initialized variables
#include<iostream>
using namespace std;

int main()
{
cout<<"new and delete keyword"<<endl;
int a =5;
int*p;
p = &a;
cout<<"value of a is"<<*p;
int *j = new int(15);
cout<<"value printed by new kew operator"<<*j<<endl;
int* array = new int(10);
for (int i = 0; i < 11; i++)
{
    array[i]= i;
    cout<<array[i]<<endl;
    cout<<array+i<<endl;
}

int arrays[10];
for (int i = 0; i < 10; i++)
{
    cout<<"i am from arrays"<<&arrays[i]<<endl;
}




}