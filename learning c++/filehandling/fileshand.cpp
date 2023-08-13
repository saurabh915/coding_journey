#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st ="whayyy ki";
ofstream shoout("sample.txt");//helps in opening file
shoout<<st;





// this is for copying from file
string st2;
ifstream in("sample2.txt");
getline(in,st2);//if you want to copy whole line
in>>st2;
cout<<st2;
}