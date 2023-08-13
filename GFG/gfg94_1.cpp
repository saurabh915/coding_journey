#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string DecimalToBinary(long long num)
    {
        string str;
        while (num)
        {
            if (num & 1) // 1
                str += '1';
            else // 0
                str += '0';
            num >>= 1; // Right Shift by 1
        }
        return str;
    }

    string reverse(string str)
    {
        string ans;

        for (int i = str.size() - 1; i >= 0; i--)
            ans.push_back(str[i]);

        return ans;
    }
    long long count101(long long n)
    {

        int i(0), j(1), k(2);
        long long count = 0;
        string bn = reverse(DecimalToBinary(n));
        cout << bn << endl;
        while (k < bn.length() || j < bn.length() - 1 || i < bn.length() - 2)
        {
            while (bn[i] != '1' && i < bn.length() - 3)
            {
                cout << "increasing i " << i << endl;
                i++;
            }
            while (bn[j] != '0' && j < bn.length() - 2)
            {
                cout << "increasing j " << j << endl;
                j++;
            }
            while (bn[k] != '1' && k < bn.length() - 1)
            {
                cout << "increasing k " << k << endl;
                k++;
            }
            if (bn[i] == '1' && bn[j] == '0' && bn[k] == '1')
            {
                count++;
                if (k < bn.length() - 1 )
                {
                    if(bn[j+1] == '0')
                    {
j++;
                    }
                    else{
                         cout << "increasing k " << k << endl;
                    k++;
                    }
                   
                }
                else
                {
                    
                    if (j < bn.length() - 2)
                    {
                        cout << "increasing j " << j << endl;
                        j++;
                    }
                    else
                    {
                        if (i < bn.length() - 3)
                        {
                            cout << "increasing i " << i << endl;
                            i++;
                        }
                        else
                        {
                            return count;
                        }
                    }
                }
            }
            else
            {
                return count;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    long long n = 18;

    cout << s.count101(n);
}