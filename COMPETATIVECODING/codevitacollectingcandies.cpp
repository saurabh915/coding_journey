#include <bits/stdc++.h>
using namespace std;
void solve(int s,vector<int>& box)
{
    int temp = box[0]+box[1];
    vector<int>sum;
    int ans=0;
    
    box.push_back(temp);
   ans = box[0]+ box[1];
   cout<<"adding boxes  "<<box[0]<<" "<<box[1]<<endl;
    box.erase(box.begin(),box.begin()+2);
    sort(box.begin(),box.end());
   while(box.size()!=1){
       
              temp = box[0]+ box[1];
               cout<<"adding boxes  "<<box[0]<<" "<<box[1]<<endl;
              ans = ans+temp;
        box.erase(box.begin(),box.begin()+2);
        box.push_back(temp);
        sort(box.begin(),box.end());
        for(int i =0; i<box.size();i++)
        {
            cout<<box[i]<<" ";
        }

        
      
          
        
      
    }

    cout<<ans<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int s;
        vector<int> box;
      
        
        cin>>s; 
         for (int i = 0; i < s; i++)
        {
            int temp;
            cin>>temp;
            box.push_back(temp);
            
        }
        solve(s,box);

    }
    
    return 0;
}