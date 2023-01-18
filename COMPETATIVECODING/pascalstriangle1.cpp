#include<iostream>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       
       vector<vector<int>> pascal;
      int cols =0;
        for(int i = 0; i<numRows;i++)
        {
            cols++;
              vector<vector<int>> pascal(numRows,vector<int>(cols,0));
            for (int j = 0; j < cols; j++)
            {
                if (j==0 || j==cols-1)
                {
                    pascal[i][j]=1;
                }
                else
                {
                   pascal[i][j] =pascal[i-1][j-1]+pascal[i-1][j]; 
                }
                
                
            }
            

        }
        int rows = pascal.size();
   for (int i = 0; i < rows; i++)
   {
  int colums = pascal[i].size();
    for (int j = colums; j > 0; j--)
    {
      if (pascal[i][j] == 0)
      {
         pascal.pop_back();
      }
      
    }
   
   }
// vector<vector<int>> generate;
//    remove_copy(pascal.begin(),pascal.end(),generate.begin(),0);

   
    return pascal;
    }
};


int main()
{
    Solution s1;
    vector<vector<int>>ans;
   ans = s1.generate(5);
   int rows = ans.size();
   for (int i = 0; i < rows; i++)
   {
  int colums = ans[i].size();
    for (int j = 0; j < colums; j++)
    {
        cout<<ans[i][j];
    }
    cout<<endl;
   }
   
    return 0;
}