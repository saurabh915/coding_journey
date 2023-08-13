// so lets understand how this work
// so we know that each character can be represented as a number if the number of that character is less than other characters then that character is smallest character among other characters.
//so using this idea what we do we create a count array which can store 256 elements
//then we store  count of each element in   count array lets say the word is abcd then we will see ascii value  "a" and store the count (frequency) of "a" in count array at index ascii value of a .then we move throght count array and do operation sunch that count[i] = count[i]+ count[i-1];
//like when we save count of each character the count array will be ...
// count = 0 , 0 , 0, 0, 0 ,0 ,1, 0 , 0 , 0, 1
//after doing count[i] = count[i]+ count[i-1];
// count = 0 , 0 , 0, 0, 0 ,0 ,1, 1 , 1 , 1, 2  etc..
//and which are the sorted positions of characters
#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        char output[arr.size()];
 string ans = "";
    // Create a count array to store count of individual
    // characters and initialize count array as 0
    int count[RANGE + 1], i;
    memset(count, 0, sizeof(count));
 
    // Store count of each character
    for (i = 0; arr[i]; ++i)
        ++count[arr[i]];
 
    // Change count[i] so that count[i] now contains actual
    // position of this character in output array
    for (i = 1; i <= RANGE; ++i)
        count[i] += count[i - 1];
 
 for(int i =0;i<= RANGE;++i)
 {
     cout<<count[i]<<endl;
 }
    // Build the output character array
    for (i = 0; arr[i]; ++i) {
        output[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }
 
    /*
    For Stable algorithm
    for (i = sizeof(arr)-1; i>=0; --i)
    {
        output[count[arr[i]]-1] = arr[i];
        --count[arr[i]];
    }
     
    For Logic : See implementation
    */
 
    // Copy the output array to arr, so that arr now
    // contains sorted characters
    for (i = 0; arr[i]; ++i)
        ans += output[i];
        
 return ans;        
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
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}

// } Driver Code Ends