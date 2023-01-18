#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
    
    ofstream out;
out.open("newfile.txt");
out<<"this is me";
out<<"this is me";
out<<"this is me";
out.close();

ifstream in;
string st,st2;
in.open("newfile.txt");
in>>st>>st2;
cout<<"here is what we found: ";
cout<<st;
cout<<st2;//this is for printing one word
while (in.eof()==0)
{
    getline(in,st);
    cout<<st<<endl;
}

in.close();
}