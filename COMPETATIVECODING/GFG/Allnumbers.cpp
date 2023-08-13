
#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
	vector<long long> allNumbers(long long A,long long B)
	{
	   vector<long long >ans;
	   vector<long long >res;
	   
	   for(long long i = A; i<=B;i= i+ A){
	       ans.push_back(i);
           cout<<"i am here";
	   }
	   for(long long i = 0; i<ans.size();i++){
	       if(B%ans[i]==0){
	           res.push_back(ans[i]);
	       }
	   }
	   
	    sort(res.begin(),res.end());
     
        
	    return res;
	}
};

int main(){
    Solution s;
    long long a,b;
    cin>>a>>b;
    vector <long long >ans(s.allNumbers(a,b));
     for (int i = 0; i < ans.size(); i++)
        {
          cout<<ans[i];
        }
    return 0;
}