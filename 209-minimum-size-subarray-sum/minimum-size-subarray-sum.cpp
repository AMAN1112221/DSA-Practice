class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int total=INT_MAX;
        int sum=0;
        while(j<n && i<=j)
        {
            sum=sum+nums[j];
            if(sum<target)
            {
                
                j++;
            }
            else
            {
                while(sum>=target)
                {
                int len=j-i+1;
                total=min(total,len);
                sum=sum-nums[i];
                i++;
                }
                j++;

            }
        }
        return (total==INT_MAX?0:total);
        
    }
};