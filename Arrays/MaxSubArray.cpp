/* Problem : Given an integer array nums, find the subarray with the largest sum, and return its sum.
  plateform :LeetCode
  difficulty:Medium
  Approach : Kadanes Algorithm
  we want the maxium sum so we use prefix sum but when we get negative number we will make it zero because max sum will never be negative if previously i got non negative 
  
  Time Complexity :O(n)
  Space Complexity :O(1)
  */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int presum=0;
        for(int i=0;i<n;i++)
        {
          presum+=nums[i];
          maxi=max(maxi,presum);
          if(presum<0)
          presum=0;
        }
        return maxi;
        
    }
};
