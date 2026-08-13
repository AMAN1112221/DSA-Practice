/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        
        int n=mountainArr.length();
        if(mountainArr.get(0)==target)
        return 0;
        
        int low=1;
        int high=n-2;
        int peak=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int midElement=mountainArr.get(mid);
            int midElementprev=mountainArr.get(mid-1);
            int midElementpost=mountainArr.get(mid+1);
            if(midElement>midElementprev && midElement>midElementpost)
            {
                peak=mid;
                break;
            }

            else if (midElement>midElementprev)
            low=mid+1;
            else
            high=mid-1;
        }
        low=1;
        high=peak;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int midElement=mountainArr.get(mid);
            if(midElement==target)
            return mid;

            else if(midElement<target)
            low=mid+1;
            else
            high=mid-1;
        }
        low=peak;
        high=n-2;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int midElement=mountainArr.get(mid);
            if(midElement==target)
            return mid;

            else if(midElement>target)
            low=mid+1;

            else
            high=mid-1;
        }
        if(mountainArr.get(n-1)==target)
        return n-1;
     return -1;
    }
};