//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// in this problem we have to find the least prime factor which can divide n ,n-1 ...1
//for that we are using for loop which travels from 2 to n 
// inside that for loop we are using condition if lp[i] ==0 means that that i th number
// has not assigned any number yet 
//then assign number lp[i] =i;
//by using this number we can assign prime numbers to other numbers by this for loop
// for(int j = i*i ; j<=n;j = i+j)
 //           {  if (lp[j] == 0)
  //                lp[j] = i;
            }
class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
    vector<int>lp(n+1,0);
    lp[1]=1;
    for(int i =2; i<= n;i++)
    {
        if(lp[i]==0)
        {
            lp[i]=i;        
            for(int j = i*i ; j<=n;j = i+j)
            {  if (lp[j] == 0)
                  lp[j] = i;
            }
        }
    }
    return lp;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends