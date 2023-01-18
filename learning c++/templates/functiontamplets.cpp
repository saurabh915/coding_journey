#include<iostream>
using namespace std;
template <class T1, class T2>
float funcaverage(T1 a,T2 b)
{
    float avg = (a+b)/2.0;
    return avg;

}
template <class T>
void swapp(T &x,T &y)
{
    T temp =x;
    x=y;
    y= temp;
}
int main()
{
    float age=funcaverage(5,4);
cout<<"the value of average is "<<age;
int x =5;
int y =4;
swapp(x,y);
cout<<"value of x is "<<x<<endl;
cout<<"value of y is" <<y;
}