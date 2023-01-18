#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int tp;
        cin >> tp;
        string s;
        cin >> s;
        int l = 0;
        int r = INT_MAX;
        bool flag = false;
        for (int i = 0; i < s.length() ; i++)
        {
            if (s[i] == 'R' && s[i+1] == 'L')
            {
                flag =true;
                cout<<0<<endl;
                break;
            }
            else{
                if (s[i] == 'L' && s[i+1] == 'R')
                {
                    cout<<i+1<<endl;
                     flag =true;
                    break;
                }
                
            }
  
    
        }
        if (!flag)
        {
           cout<<-1<<endl;
           
        }
        
    }

    return 0;
}