
#include <bits/stdc++.h>
using namespace std;

int soln(int n, int of, vector<int> box)
{
    vector<int> bc({box});
    sort(bc.begin(), bc.end());
    int temp = bc[of - 1];
    bc[of - 1] = bc[n - 1];
    bc[n - 1] = temp;
    sort(bc.begin()+of,bc.end());
    int cost = 0;
    cout<<"final answer:"<<endl;
    for(int j =0; j<n;j++)
    {
        cout<<bc[j]<<" ";
    }
    for (int i = 0; i < n; i++)
    {
        if (box[i] != bc[i])
        {
            for (int j = i + 1; j < n; j++)
            {
                if (box[j] == bc[i])
                {
                    int mini = min(box[i],box[j]);
                    int maxi = max(box[i],box[j]);
                    cout<<"maxi is  "<<maxi<<"mini is "<<mini<<endl;
                    if (((2 * (box[0] * mini) + (box[0] * maxi)) < box[i] * box[j]))
                    {
                        cost = cost + 2 * (box[0] * mini) + box[0] * maxi;
                        cout << "swapping elements" << box[i] << " " << box[j] << endl;
                        cout << cost << "two times" << endl;
                        swap(box[i], box[j]);
                        break;
                    }
                    else
                    {
                        cost = cost +box[i] * box[j];
                        swap(box[i], box[j]);
                        cout << "swapping elements" << box[i] << " " << box[j] << endl;
                        cout << cost << endl;
                        break;
                    }
                }
            }
        }
    }
    return cost;
}

int main()
{
    vector<int> box({20 ,50,30 ,80 ,70});
    int n = box.size();
    int k = 2;

    cout << soln(n, k, box);

    return 0;
}
