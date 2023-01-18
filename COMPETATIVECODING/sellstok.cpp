#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    //     int i; 
    //       vector <int> :: iterator iter2;
    //     iter2 = prices.begin();
    //     int minimum = *iter2;
    //     for(iter2=iter2+1; iter2<prices.end()-1;iter2++)
    //     {
    //         if((*iter2)<minimum)
    //         {
    //               minimum = (*iter2);
    //         }
    //     }
    //     cout<<"minimum value of the given vector is "<<minimum;
    //     int max =minimum;
    //     iter2 = prices.begin();
    //     for(iter2;iter2<prices.end();iter2++)
    //     {
    //         if((*iter2) ==minimum)
    //         {
    //             break;
    //         }
    //     }
    //     for(iter2=iter2+1;iter2<prices.end();iter2++)
    //     {
    //       if(max<(*iter2))
    //       {
    //           max=(*iter2);
    //       }
            
    //     }
    //             cout<<"maximum value of the given vector is "<<max;

    //    int res= max-minimum;
    //    cout<<"resultant is "<<res;
    //     vector <int> :: iterator iter;
    //     iter = prices.end();
    //     if(res>0 )
    //     {
    //         return res;
    //     }
    //     else{
    //         return 0;
    //     }

// vector <int> :: iterator iter1;
// vector <int> :: iterator iter2;
// vector <int> store;

//   iter1 = prices.begin();
     
//         for(iter1; iter1<prices.end();iter1++)
//         {
//            for (iter2=iter1+1; iter2<prices.end();iter2++)
//            {
//                if (*iter1<*iter2)
//                {
//                    store.push_back(*iter2-*iter1);
//                }
               
//            }
           
//         }
//         vector <int> :: iterator str2;
//         str2 =store.begin();
//         if ( store.size()==0)
//         {
//             return 0;
//         }
//         else
//         {
//           return *max_element(store.begin(), store.end()) ;
//         }

//in this we have to find the stwo elements array which substraction which  should maximum
//for that we started from first element array and then it substracted it with th maximum next element in array
  vector <int> :: iterator iter1;
    vector <int> :: iterator iter2;



int previous ;
int out =0;
  iter1 = prices.begin();
  
  iter2 = prices.end();
 
     if (iter1 == iter2-1)
     {
      
         return 0;
     }
     
        for(iter1; iter1<prices.end()-1;iter1++)
        {
          int maxi= *max_element(iter1+1, iter2) ;
          if(maxi>*iter1)
          {
             
             previous  = maxi-*iter1;
            out = max(previous,out);
              
          }

        }
  
          return out ;
        

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