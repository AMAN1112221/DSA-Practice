class Solution {
public:
   int bs(vector<int>&arr,int low,int high,int x)
   {
    if(low>high)
    return -1;

    int mid=low+(high-low)/2;
    if(arr[mid]==x)
    return mid;


    else if(arr[mid]>x)
    return bs(arr,low,mid-1,x);

    return bs(arr,mid+1,high,x);
   }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return bs(nums,0,n-1,target);

        
    }
};