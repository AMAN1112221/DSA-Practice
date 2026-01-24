/* Problem : Count Number of Pairs With Absolute Difference K
  plateform :LeetCode
  difficulty:Easy
  problem statement: Given an integer array nums and an integer k, return the number of pairs (i, j) where i < j such that |nums[i] - nums[j]| == k.
  Approach :Bruteforce
  Just using two loop to find the total number of ways 
  Time Complexity :O(n*n)
  Space Complexity :O(1)
  */
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((nums[j]-nums[i]==k) || (nums[j]-nums[i]==-1*k))
                count++;
            }
        }
        return count;
        
    }
};
