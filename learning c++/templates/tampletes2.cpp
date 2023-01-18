//in this programme we take two objects and created respective arrays from on vector creating function
//and then  called dot product method from 1st oject and  multiplied its arrays with second objects arrays by passig 2nd object as parameter  
//for creating them tamplets we have to change data  types of all variables and functions into that data type in which we want. 

#include<iostream>
using namespace std;
template  <class T>
class vector
{
    int size;
    public:
    T * arr;//here T is data type arr is pointer variable
           vector(int m)
           {
             size = m;
             arr = new T[size];  
           }
    T dotproduct(vector &v)
    {
        T d =0;
     for (int i = 0; i < size; i++)
     {
         d += this->arr[i]*v.arr[i];
     }
     return d;
    
    
    } 
};
int main()
{
vector <int>v1(3);//here we specify which data type you want
v1.arr[0] =0;
v1.arr[1]=0;
v1.arr[2]=0;


vector <int>v2(3);
v2.arr[0] =45;
v2.arr[1]=35;
v2.arr[2]=15;

int a =v1.dotproduct(v2);
cout<<a<<endl;
//in float
vector <float>v3(3);//here we specify which data type you want
v3.arr[0] =1.0;
v3.arr[1]=1.0;
v3.arr[2]=1.0;


vector <float>v4(3);
v4.arr[0] =1.1;
v4.arr[1]=1.0;
v4.arr[2]=1.0;

float a2 =v3.dotproduct(v4);
cout<<a2<<endl;
return 0;
}