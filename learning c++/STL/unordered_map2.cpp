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
for (auto a: vec1)
{
    m[a]++;
  
}
for (auto a : m)
{
   cout<<a.first<<" "<<a.second<<endl;
}



    }
 
};
int main()
{
unorderedd a;
a.maps();
}