class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  //     nums1.insert(nums1.begin(),nums1.begin())
  //   nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
  // sort(nums1.begin(),nums1.end());
  //      remove(nums1.begin(),nums1.end(),0);//it will remove all the zeros from the vector
    vector<int> nums3;
  for( int i = 0;i<m;i++)
  {
       nums3.insert(nums3.begin() + i, nums1[i]);
  }
  for(int j =0;j<n;j++)
  {
      nums3.insert(nums3.end() + j, nums2[j]);

  }
        
     sort(nums3.begin(),nums3.end());
         nums1.clear();
         for (int i=0; i<nums3.size(); i++)
         {
              nums1.push_back(nums3[i]);
         }
       
    }
    
    };