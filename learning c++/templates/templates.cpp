//in this programme we take two objects and created respective arrays from on vector creating function
//and then  called dot product method from 1st oject and  multiplied its arrays with second objects arrays by passig 2nd object as parameter  


#include<iostream>
using namespace std;
class vector
{
    int size;
    public:
    int * arr;
           vector(int m)
           {
             size = m;
             arr = new int[size];  
           }
    int dotproduct(vector &v)
    {
        int d =0;
     for (int i = 0; i < size; i++)
     {
         d += this->arr[i]*v.arr[i];
     }
     return d;
    
    
    } 
};
int main()
{
vector v1(3);
v1.arr[0] =0;
v1.arr[1]=0;
v1.arr[2]=0;


vector v2(3);
v2.arr[0] =45;
v2.arr[1]=35;
v2.arr[2]=15;

int a =v1.dotproduct(v2);
cout<<a<<endl;
return 0;
}