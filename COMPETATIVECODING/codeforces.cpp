#include<bits/stdc++.h>
using namespace std;
long long solve(int n, vector <long long> &a){
long long ans =a[0];

    for (int i = 1; i < n; i++)
    {
       ans = ans * a[i];

    }
    ans = ans+ (n-1);
    return ans*2022;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<long long>a;
        for(int i =0; i<n;i++)
        {
            long long temp;
            cin>>temp;
            a.push_back(temp);
        }
       
        
       long long ans =  solve(n,a);
       cout<<ans<<endl;
    }
    
    return 0;
}
