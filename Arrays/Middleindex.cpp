/* Problem :  Find the Middle Index in Array
  plateform :LeetCode
  difficulty:Easy 
  problem statement: Given a 0-indexed integer array nums, find the leftmost middleIndex (i.e., the smallest amongst all the possible ones).
  Approach : Maths
 finding total sum and comparing the left and right sum 
  Time Complexity :O(n)
  Space Complexity :O(n)
  */
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        int leftsum=0;
        for(int j=0;j<n;j++)
        {
            if(leftsum==(sum-leftsum-nums[j]))
            return j;
            leftsum=leftsum+nums[j];
        }
        return -1;
        
    }
};
