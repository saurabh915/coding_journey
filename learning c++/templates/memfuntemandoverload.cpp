//if there are two functions of same name
//but one is specified by exact data type 
//and another is specified by tampletes
///then exact match function will be called

#include<iostream>
using namespace std;
template <class T>



class harry
{
    public:
    T data ;
     harry(T x){
        data =x;
    }
 void display();
};


template <class T1>

void harry<T1>::display(){
cout<<data;
}


void func(int a){
    cout<<"i am first func()"<<a<<endl;//exact match function
}


template <class T1>
void func(T1 a){//templtized function
    cout<<" i am templatized function"<<a<<endl;
}



int main()
{
harry <int> h(45);
h.display();
func(4.45);
}