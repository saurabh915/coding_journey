//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// In this  problem we have to convert whole matrix by changing each element in matrix by its nearest distance from 1


// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
   
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    vector<vector<int>>ans(grid.size(), vector<int>(grid[0].size()));
	    queue<pair<pair<int,int>,int>>q;
	    vector<vector<int>>visited(grid.size(), vector<int>(grid[0].size()));
	   for(int i =0; i<grid.size();i++)
	   {
	       for(int j =0; j<grid[0].size(); j++)
	       {
	         if(grid[i][j] == 1)
	         {
	            q.push({{i,j},0});
	            visited[i][j] =1;
	         }
	         else{
	            visited[i][j] =0; 
	         }
	       
	       }
	   }
	   int delrow[] ={-1,0,1,0};
	   int delcol[] = {0,1,0,-1};
	   
	   while(!q.empty()){
	       int row= q.front().first.first;
	       int col = q.front().first.second;
	       int steps = q.front().second;
	       q.pop();
	      ans[row][col] = steps;
	       for(int i =0; i< 4;i++)
	       {
	           int nrow = row + delrow[i];
	           int ncol =  col + delcol[i];
	           if(nrow >= 0 && nrow<grid.size()  && ncol >=0 && ncol <grid[0].size() && visited[nrow][ncol] == 0)
	           {
	               visited[nrow][ncol] =1;
	               q.push({{nrow,ncol},steps+1});
	           }
	       }
	   }
	   return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends