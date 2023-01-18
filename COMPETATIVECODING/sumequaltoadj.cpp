#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    bool flag = false;
    while(t--){
        int n;
        cin>>n;
        if(n%2 ==0){
            cout<<"YES"<<endl;
            for(int i =0; i<n;i++)
            {
                if(flag){
                    cout<<1<<" ";
                    flag = !flag;
                }
                else{
                   cout<<-1<<" ";
                   flag = !flag;
                }
            }
        }
        else{
            cout<<"NO"<<endl;
            continue;
        }
        
    }
    return 0;
}