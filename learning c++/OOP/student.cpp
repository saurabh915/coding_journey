#include<iostream>
#include<string>
using namespace std;







class student;//declaring that class which is base class

class student2;
// 4.   a function in a base class can might not be used






class student 
{
    string name;
    int roll_no ;
    float marks;
    friend  void  student2::setdata2(string a,int n1,int n2 );
     friend class student2;
    public:
    void setdata(string,int,int);
   void getdata();
};

class student2 : public student//defining that class which is going to use  private members of base class
{
    public:
    void setdata2(string a,int n1,int n2);
};



void student :: setdata(string a,int  n1, int n2){
    name =a;
    roll_no=n1;
    marks =n2;
   

}
void student:: getdata(){
    cout<<name<<endl;
    cout<<roll_no<<endl;
    cout<<marks<<endl;
}
void  student2::setdata2(string a,int  n1, int n2)
{

     name =a;
    roll_no=n1;
    marks =n2;
  

}
int main()
{
    student s[10];
//     for (int i = 0; i < 5; i++)
//     {
//          cin>>s[i].name;
//     cin>>s[i].roll_no;
//     cin>>s[i].marks;
//     }
    
//    for (int i = 0; i < 5; i++)
//    {

//    }

 s[0].setdata("saurabh", 61, 88);
     s[0].getdata();
     student2 s2;
    
   s2.setdata2("rohit",34,55);
    
}