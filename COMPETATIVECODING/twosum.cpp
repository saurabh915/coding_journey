#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
         
         vector<int> vearray;
    
    
        
     
        for (int j = 0; j < nums.size()-1; j++)
        {
            for (int k = j+1; k < nums.size(); k++)
            {
                 if(nums[j]+nums[k]==target)
                 {
                     vearray.push_back(j);
                     vearray.push_back(k);
                     return vearray;
                 }
           
               
                   
                   
                   
                   
               
               
           
            }
            
          
        }
       return vearray; 
    }
};

int main()

{ 
    
    int size,element,target;

      vector<int> va;
    int arr[2];
    Solution a;
    vector <int > nums;
    cout<<"enter the size of a vector"<<endl;
     cin>>size;  
     for(int i =0; i<size;i++)
     {
         cout<<"enter the element to add to this vector";
        cin>>element;
        nums.push_back(element);
    }
    cout<<"enter the target number";
    cin>>target;
  va= a.twoSum(nums,target);
  for(int i =0; i<2;i++)
     {
         
        cout<<va[i];
    }
}