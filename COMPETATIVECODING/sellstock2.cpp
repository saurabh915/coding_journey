 
class Solution {
public:
    int maxProfit(vector<int>& prices) {

  vector <int> :: iterator iter1;
    vector <int> :: iterator iter2;


vector <int> store;

  iter1 = prices.begin();
  
  iter2 = prices.end();
 
     if (iter1 == iter2-1)
     {
      
         return 0;
     }
     
        for(iter1; iter1<prices.end()-1;iter1++)
        {
          int max= *max_element(iter1+1, iter2) ;
          if(max>*iter1)
          {
             
               store.push_back(max-*iter1);
          }

        }
        if ( store.size()==0)
        {
            return 0;
        }
        else
        {
          return *max_element(store.begin(), store.end()) ;
        }

    }
};


int main()
{
     vector<int> nums3;
nums3= {};
Solution s3;
int a = s3.maxProfit(nums3);
cout<<a;
return 0;
}