//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// bitwise shifting any number x to the left by y bits yields x * 2 ** y .

class Solution{
	public:
vector<string> calculate(string s, int size){
	    int poss = pow(2,size);
	    vector<string>ps;
	    int counter, j;
	    for(counter = 0; counter<poss;counter++)
	    {
	        string temp;
	        for(j =0; j<size;j++)
	        {
	            if(counter & (1<<j))
	            {
	                temp = temp + s[j];  
	                remove(temp.begin(), temp.end(), ' ');
	            }
	        }
	 
	     ps.push_back(temp);
	    
	}
	sort(ps.begin(),ps.end());
	return ps;
}
		vector<string> AllPossibleStrings(string s){
		  int size = s.length();
		 return  calculate(s,size);
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends