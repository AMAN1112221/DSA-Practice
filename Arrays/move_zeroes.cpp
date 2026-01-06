/* Problem : Move zeroes
  plateform :LeetCode
  difficulty:Easy 
  problem statement: Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
  
  Approach : Two pointer 
  started initially from index 0 if j finds non zero it swap with i and incremented by one both if j finds zero then only j gets incremented.
  means all zero elements automatic moving in right.
  
  Time Complexity :O(n)
  Space Complexity :O(1)
  */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        int n=nums.size();
        while(j<n)
        {
            if(nums[j]!=0)
            {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[j]==0)
            {
                j++;
            }
        }
        }
};
