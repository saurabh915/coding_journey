

//In this problem we used stack data structure very efficiently
//like we first store all the indices in stack from 0 to n which are stored from n to 0 in stack
//then we pop first two elements from stack and name them i and j resp.
// if array[i][j] ==1 then it means i th element knows j th person so i will not be celebrity so we push j in stack 
//else we push j and we do this in while loop which iterate till stack size >=2
// then we check for that last element which is  still in stack if that 
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        for(int i = 0; i<n;i++)
        {
            st.push(i);
        }
        while(st.size()>=2)
        {
            int i = st.top();
            st.pop();
            int j = st.top();
             st.pop();
            if(M[i][j] == 1){
                st.push(j);
            }
            else{
                st.push(i);
            }
        }
        int last = st.top();
         st.pop();
        for(int i = 0 ;i <n; i++)
        {
            if(i != last)
            {
                if(M[i][last] ==0 || M[last][i] ==1)
                {
                    return -1;
                }
            }
        }
        return last;
    }
};





//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends