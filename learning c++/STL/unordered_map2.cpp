#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class unorderedd
{
    
    public:
     
    void maps()
    {
        vector<int> vec1(6);
        vector <int> :: iterator iter;
        iter = vec1.begin();
        for (iter;iter<vec1.end();iter++)
        {
            int a;
            cout<<"enter the number you want to insert";
            cin>>a;
           *iter = a;
        }
     unordered_map <int, int> m;   
     int b= 60;
for (auto a: vec1)
{
    m[a] =b--;

}
for (auto a : m)
{
   cout<<a.first<<" "<<a.second<<endl;
}
cout<<"printing with iterator"<<endl;
 unordered_map <int,int> :: iterator iter2;
        iter2 = m.begin();
        for (iter2;iter2 != m.end();iter2++)
        {
           
             cout<<(*iter2).first<<" "<<(*iter2).second<<endl;
        }

    }
 
};
int main()
{
unorderedd a;
a.maps();
}