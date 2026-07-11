class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>arr(n,0);
        int m=queries.size();
        for(int i=0;i<m;i++)
        {
            arr[queries[i][0]]+=-1;
            if(queries[i][1]+1<n)
            {
                arr[queries[i][1]+1]+=1;
            }
        }
        for(int i=1;i<n;i++)
        {
            arr[i]=arr[i]+arr[i-1];
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=nums[i]+arr[i];
            if(nums[i]>0)
            return false;
        }
        return true;
    }
};