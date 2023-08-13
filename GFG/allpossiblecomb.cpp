#include<bits/stdc++.h>
using namespace std;
void printcombinations(vector<int>arr,int n)
{
    vector<vector<int>>ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < i; i++)
        {
            for(int k=0;k<j;k++){
ans.push_back(arr[j])
            }
        }
        
    }
    
}
int main(){
    vector<int> arr= {1,2,3,4,5,6};
    int size = 6;
    printcombinations(arr,size);

    return 0;
}