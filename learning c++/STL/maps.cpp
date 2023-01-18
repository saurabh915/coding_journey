#include<iostream>
#include<map>
#include<string>
using namespace std;


int main()
{
map < string, int> marksmap;
marksmap["saurabh"]= 98;
marksmap["rohan"]=104;
marksmap["ritesh"]=102;
map <string , int>::iterator iter;
iter = marksmap.begin();
for ( iter = marksmap.begin(); iter != marksmap.end(); iter++)
{
 cout<<(*iter).first<<" "<<(*iter).second;
    /* code */
}
cout<<"the size is: "<<marksmap.size()<<endl;
cout<<"the max size is "<<marksmap.max_size()<<endl;
}