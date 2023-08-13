#include<bits/stdc++.h>
using namespace std;
int minSteps(vector<int> A, int N){
map<int, int> mp;
for (int i = 0; i < N; i++) {
   mp[A[i]]++;
}
int max = INT_MIN;
for (int i = 0; i < mp.size(); i++) {
   if(mp[A[i]]>max){
       max =mp[A[i]];
   }
}

    return N-max;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */    
  vector<int> A ;
 
  int N ;
  cin>>N;
 for (int i = 0; i < N; i++)
 {
    int temp ;
    cin>>temp;
   A.push_back(temp);
 }
  // Function Call
  cout << minSteps(A, N);
    }

 
  return 0;
}