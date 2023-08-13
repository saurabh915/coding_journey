#include <bits/stdc++.h>
using namespace std;
class gfg {
 
    /* Function to calculate x raised to the power y */
public:
   int power(int x, unsigned int y)
{
    int temp;
    if (y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}
 
};
 
/* Driver code */
int main()
{
    gfg g;
    int x = 2;
    unsigned int y = 3;
 
    // Function call
    cout << g.power(x, y);
    return 0;
}