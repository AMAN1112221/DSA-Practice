class Solution {
public:
int lowerbound(vector<int>arr,int target,int n)
{
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }
        else 
        {
            low=mid+1;
        }
    }
    return ans;
}
int upperbound(vector<int>arr,int target,int n)
{
    int ans=n;

    int low=0;
    int high=n-1;
    while(low<=high)
    {
    int mid=low+(high-low)/2;
    if(arr[mid]>target)
    {
        ans=mid;
        high=mid-1;
    }
    else
    low=mid+1;
    }



    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int first=-1;
        int last=-1;
        int n=nums.size();
        int lw=lowerbound(nums,target,n);
        int up=upperbound(nums,target,n);
        if(lw!=n && nums[lw]==target)
        {
        first=lw;
        last=up-1;
        }

        

        ans.push_back(first);
        ans.push_back(last);
        return ans;
        
        
    }
};