class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minindex=-1;
        int maxindex=-1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int count=INT_MAX;
        int n=nums.size()-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxi)
            {
                maxi=nums[i];
                maxindex=i;
            }
            if(nums[i]<mini)
            {
                mini=nums[i];
                minindex=i;
            }
        }
        int l;
        int r;
        if(maxindex>minindex)
        {
            r=maxindex;
            l=minindex;
        }
        else
        {
            r=minindex;
            l=maxindex;
        }
       
        
            //case1
            count=min(count ,r+1);
            //case2
            count=min(count,n-l+1);
            //case3
            count=min(count,l+1+(n-r+1));
        
    return count;
        
    }
};