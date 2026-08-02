class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
       
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[low]==nums[mid] && nums[mid]==nums[high])
            {
                if(nums[low]==target)
                return true;
                
                low=low+1;
                high=high-1;
                continue;
            }
            if(nums[mid]==target)
            return true;

            //leftside
            else if(nums[low]<=nums[mid])
            {
                if(target >=nums[low] && target <=nums[mid])
                high=mid-1;
                else
                low=mid+1;
            }
            //righside
            else
            {
                if(target >=nums[mid] && target <=nums[high])
                low=mid+1;
                else
                high=mid-1;
            }
        }
        return false;
        
    }
};