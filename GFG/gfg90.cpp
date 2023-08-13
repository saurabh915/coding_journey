

class Solution {
  public:
    vector<int> juggling(vector<vector<int>> &arr,int n) {
        map<int, int> mp;
        int maxi = 0;
        int cn = 1;
      vector<int>ans;
     for(int i = 1; i<=3;i++)
     {
         int incup =i;
          int count = 0;
      for(int j =0;j<arr.size();j++)
      {
          if(arr[j][0] == incup || arr[j][1] == incup)
          {
              if(arr[j][0] == incup)
              {
                  incup = arr[j][1];
              }
              else{
                  if(arr[j][1] == incup)
                  {
                       incup = arr[j][0];
                     
                  }
              }
          }
          
          if(arr[j][2] == incup){
             mp[i]++; 
               count++;
                
          }
      }
     }
     
     for(auto m :mp){
    
         if(maxi<m.second){
           
             maxi = m.second;
             cn = m.first;
         }
     }
   
     ans.push_back(cn);
     ans.push_back(mp[cn]);
     return ans;
    }
};