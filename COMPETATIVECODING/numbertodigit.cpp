class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int m =0;
        int n=0;
        for(int i = digits.size()-1;i>=0;i--)
        {
            m= m+ (digits[i]*n);
            n= n*10;
            
        }
        n=n+1;
        
    }
};