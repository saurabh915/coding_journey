#include<bits/stdc++.h>
using namespace std;
void solve(int s, int n, int k, vector<int>block)
{
  vector<int>stadium;
  int p = 0;
  bool a =true;
  int temp =0;
  for(int i =0;i<s;i++)
  {
    if (a)
    {
        stadium.push_back(1);
        if(block[p] ==i+1-temp){
            temp = temp + block[p];
            p++;
            a = !a;

        }
    }
    else
    {
        stadium.push_back(0);
        if(block[p] ==i+1-temp){
            temp = temp + block[p];
            p++;
            a = !a;

        }
    }
    
    
  }
  int tm = n;
  int left ,right =0;
  for(int i =0; i<s;i++){
   
  }
    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int s,n,k,m;
        vector<int> block;
      
        
        cin>>s>>n>>k>>m; 
         for (int i = 0; i < m; i++)
        {
            int temp;
            cin>>temp;
            block.push_back(temp);
            /* code */
        }
        solve(s,n,k,block);

    }
    
    return 0;
}