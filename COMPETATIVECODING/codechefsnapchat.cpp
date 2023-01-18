#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int maxi =0;
  vector<int>a;
  vector<int>b;
  int n;
  cin>>n;
  int count =0;
  for (int i = 0; i < n; i++) {
      int temp;
      cin>>temp;
      a.push_back(temp);
  }
    for (int i = 0; i < n; i++) {
      int temp;
      cin>>temp;
      b.push_back(temp);
      
  }
  int maxi2;
  for(int i =0; i<a.size();i++)
  {
    cout<<"a and b are "<<a[i]<<" "<<b[i]<<endl;
    if(a[i]!=0 && b[i]!=0){
          if(maxi<count){
            count++;
              maxi = count;
            cout<<"maxi count is changed to "<< maxi <<endl;
          }
          else
          {
          
            count++;
            maxi2 = count;
          cout<<"count is incremented  "<<count<<endl;
          }
          
          
      }
      else{
          count =0;
         cout<<"count is   "<<count<<endl;
      }
  }
 int sans = max(maxi,count);
 cout<<max(sans,maxi2);
  
}
	return 0;
}
