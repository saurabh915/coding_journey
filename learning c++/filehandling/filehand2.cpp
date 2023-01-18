#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    string name ;
cout<<"enter your name";
cin>>name;
ofstream hout("new.txt");

 hout<<"my name is "+ name;
 hout.close();


string names;
 ifstream hin("sample.txt");
 hin>>names;
 cout<<"this is copied from sample";
 getline(hin,names);
 cout<<names;
}