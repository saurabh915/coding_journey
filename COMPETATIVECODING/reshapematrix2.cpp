#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &matrix, int r, int c)
    {
        // we have to convert it into r x c
        // first convert the given matrix in one d array
        // by using formula m[i][j]= m[c*i+j]
        // lets take example of 1,2,3
        // 6,4,4
        // 5,5,5
        // we have to convert it into 1d array
        // here c is 3
        // M[i] => M[i/m][i%n] for converting 1d array to 2d
        int m = matrix.size();
        cout<<m<<endl;
        int n = matrix[0].size();
        cout<<n;
        vector<int> mat3;
        // vector<int> mat3(r,vector<int>(c,0));//vector in vector
        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {
                mat3.push_back(matrix[i][j]);
            }
        }
        vector<vector<int>>new_matrix(r,vector<int>(c,0));
        for (int i = 0; i < m * n; i++)
        {

           new_matrix[i / c][i % c] = mat3[i];
        }
        
        // for (int i = 0; i < m*n; i++)
        // {
        //         cout << " "<<mat3[i];
           
            
        // }
//  cout << " "<<endl;
        return new_matrix;
    }
};

int main()
{
    vector<vector<int>> matrix;
    vector<vector<int>> mat2;

    class Solution s1;
    matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}};
 for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout <<" "<< matrix[i][j];
        }
        cout << endl;
    }

    cout << endl;

    mat2 = s1.matrixReshape(matrix, 4,2);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout <<" "<< mat2[i][j];
        }
        cout << endl;
    }
  cout << endl;
    return 0;
}