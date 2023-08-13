// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// In this problem we start from end of the vector and we require one stack (named as store) for storing probable next vector and nge vector for mapping that store value with indexes of ans vector
//so the process is first create store stack and go inside for loop which starts fron end of inputed array and check if(store.empty()){
 //             store.push(arr[i]);
   //           nge[i]=-1;
             
              
     //     }

   //  above code says that if you are on last element of inputed array then that last number will always replaced by -1 after that you are pushing arr[i] value inside stack then continue iterating model
   //now store is not empty so above code will not execute now there is another else condition
    // while(  store.top()<=arr[i] )
    //           {
               

    //               store.pop();
    //               if(store.empty()){
    //                 break;
    //               }
    //           }

//above code means if your current iterating element is arr[i] and which is bigger than store.top()
// then that store element is of no use we will pop this element and after popping elelment if store is empty then break the while loop and there is another condition
//  if(store.empty()){
                
//               store.push(arr[i]);
//               nge[i]=-1;
              
              
//            }
//           else{
          
            
//               nge[i]=store.top();
//               store.push(arr[i]);
//           }

//push element arr[i] in store and nge[i] =-1;
// else     nge[i]=store.top();
//               store.push(arr[i]);
// after the for loop return nge 
 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
         stack<long long> store;
        
        vector<long long> nge(n);
        for (int i = arr.size()-1; i >=  0; i--)
        {
          if(store.empty()){
              store.push(arr[i]);
              nge[i]=-1;
             
              
          }
          else{
              while(  store.top()<=arr[i] )
              {
               

                  store.pop();
                  if(store.empty()){
                    break;
                  }
              }
              if(store.empty()){
                
              store.push(arr[i]);
              nge[i]=-1;
              
              
           }
          else{
          
            
              nge[i]=store.top();
              store.push(arr[i]);
          }
          }
        }
     
        
        return nge;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends