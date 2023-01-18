#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
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
        int m = mat.size();
        int n = mat[0].size();
        vector<int> mat3(m*n);
        // vector<int> mat3(r,vector<int>(c,0));//vector in vector
        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {
                mat3[n * i + j] = mat[i][j];
            }
        }
        for (int i = 0; i < r * c; i++)
        {

            mat[i / c][i % c] == mat3[i];
        }
        vector<vector<int>> mat2;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << mat[i][j] << endl;
            }
        }

        return mat;
    }
};

int main()
{
    vector<vector<int>> mat;
    vector<vector<int>> mat2;

    class Solution s1;
    mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {3, 5}};

    mat2 = s1.matrixReshape(mat, 2, 5);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mat2;
        }
        cout << endl;
    }

    return 0;
}