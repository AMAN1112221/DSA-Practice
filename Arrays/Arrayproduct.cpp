/* Problem :  Product of Array Except Self
  plateform :LeetCode
  difficulty:Medium
  Approach : Prefix and suffix product
  
  
  Time Complexity :O(n)
  Space Complexity :O(n)
  */
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        vector<int>suf(n);
        vector<int>ans;
        pre[0]=1;
        suf[n-1]=1;

        for(int i=1;i<n;i++)
        {
           pre[i]= nums[i-1]*pre[i-1];
        }
         for(int i=n-2;i>=0;i--)
        {
           suf[i]=nums[i+1]*suf[i+1];
        }
        for(int i=0;i<n;i++)
        {
            ans.push_back(pre[i]*suf[i]);
        }
        return ans;

       
        
    }
};
