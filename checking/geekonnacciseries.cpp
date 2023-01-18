
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long goodSubarrays(int n,int x, vector<int>arr) {
      map<int,int>mp;
      long long ans;
      for(int i = 0; i<n;i++ )
      {
          int c = x;
          for(int j =i;j<n;j++ )
          {
                mp[arr[j]]++;
               if(mp[arr[j]]>=3)
              {
                     c--;
                 if(!c)
                {
                   ans++;
                  break;
                }
               }
          mp.clear();
          }
         
         
      }
      return ans;
    }
};


// { Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        cin >> n;
        
        
        vector<int> arr(n);
        for(int i = 0; i<n; i++)
        {
            cin >> arr[i];
        }
        int x;
        cin >> x;
        
        Solution obj;
        long long res = obj.goodSubarrays(n,x,arr);
        
        cout<<res<<endl;
        
    }
}
  // } Driver Code Ends