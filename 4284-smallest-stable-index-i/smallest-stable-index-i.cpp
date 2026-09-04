class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>mini(n);
        
        int tillmin=nums[n-1];
        int tillmax=nums[0];
        mini[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<=tillmin)
            {
                tillmin=nums[i];
            }
            mini[i]=tillmin;
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=tillmax)
            {
                tillmax=nums[i];
            }
            int check=tillmax-mini[i];
            if(check<=k)
            return i;
        }
        return -1;
        
    }
};