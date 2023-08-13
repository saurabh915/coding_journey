#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>A,vector<int>B,int p,int s,int t,int & n)
{
    if(s>p){
        return;
    }
     solve(A,B,p,s+1,t,n);
     
    if(t-A[s]>=0 ){
        int temp = A[s]+B[s];
        n = n+1;
        solve(A,B,p,s+1,t-temp,n);
    }
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int p,t;
	    cin>>p>>t;
	    vector<int>A;
	    vector<int>B;
	    for(int i =0; i<p;i++)
	    {
	        int temp;
	        cin>>temp;
	        A.push_back(temp);
	    }
	        for(int i =0; i<p;i++)
	    {
	        int temp;
	        cin>>temp;
	        B.push_back(temp);
	    }
	   
	    int s =0;
	    int n =0;
	    
	    solve(A,B,p-1,s,t,n);
	    cout<<n<<endl;
	}
	return 0;
}
