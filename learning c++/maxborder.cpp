#include <bits/stdc++.h>

using namespace std;

int main()
{

    int s, n, m;

    cin >> s;

    int ans[s];

    for (int i = 0; i < s; i++)
    {

        ans[i] = 0;

        cin >> n >> m;

        char arr[n][m];

        // entering values

        for (int j = 0; j < n; j++)
        {

            for (int k = 0; k < m; k++)
            {

                cin >> arr[j][k];
            }
        }

        int temp1 = 1, temp2 = 1, temp3 = 1, temp4 = 1, upper = 1, lower = 1, left = 1, right = 1, max_col = 1, max_row = 1;

        // for upper column borders

        for (int j = 0; j < n; j++)
        {

            for (int k = 0; k < m; k++)
            {

                if (j == 0 && arr[j][k] == '#' && arr[j][k + 1] == '#')
                {
                    temp1++;
                }

                else if (j != 0 && arr[j][k] == '#' && arr[j][k + 1] == '#' && arr[j - 1][k + 1] != '#')
                {

                    temp1++;
                }

                else
                {
                    if (temp1 > upper)
                    {
                        upper = temp1;
                    }
                    temp1 = 1;
                }
            }

            upper > max_col ? max_col = upper : max_col = max_col;

            temp1 = 1;
        }

        // for lower column borders

        for (int j = 0; j < n; j++)
        {

            for (int k = 0; k < m; k++)
            {

                if (j == n - 1 && arr[j][k] == '#' && arr[j][k + 1] == '#')
                {
                    temp1++;
                }

                else if (j != n - 1 && arr[j][k] == '#' && arr[j][k + 1] == '#' && arr[j + 1][k + 1] != '#')
                {

                    temp2++;
                }

                else
                {
                    if (temp2 > lower)
                    {
                        lower = temp2;
                    }
                    temp2 = 1;
                }
            }

            lower > max_col ? max_col = lower : max_col = max_col;

            temp2 = 1;
        }

        // for left row borders

        for (int k = 0; k < m; k++)
        {

            for (int j = 0; j < n; j++)
            {

                if (k == 0 && arr[j][k] == '#' && arr[j + 1][k] == '#')
                {
                    temp3++;
                }

                else if (k != 0 && arr[j][k] == '#' && arr[j + 1][k] == '#' && arr[j + 1][k - 1] != '#')
                {

                    temp3++;
                }

                else
                {
                    if (temp3 > left)
                    {
                        left = temp3;
                    }
                    temp3 = 1;
                }
            }

            left > max_row ? max_row = left : max_row = max_row;

            temp3 = 1;
        }

        // for right row borders

        for (int k = 0; k < m; k++)
        {

            for (int j = 0; j < n; j++)
            {

                if (k == m - 1 && arr[j][k] == '#' && arr[j + 1][k] == '#')
                {
                    temp4++;
                }

                else if (k != m - 1 && arr[j][k] == '#' && arr[j + 1][k] == '#' && arr[j + 1][k + 1] != '#')
                {

                    temp4++;
                }

                else
                {
                    if (temp4 > right)
                    {
                        right = temp4;
                    }
                    temp4 = 1;
                }
            }

            right > max_row ? max_row = right : max_row = max_row;

            temp4 = 1;
        }

        // greatest border

        ans[i] = (max_col < max_row ? max_row : max_col);
    }

    // FINAL OUTPUT

    for (int i = 0; i < s; i++)
    {

        cout << ans[i] << endl;
    }

    return 0;
}