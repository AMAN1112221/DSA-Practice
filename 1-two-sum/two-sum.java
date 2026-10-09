import java.util.*;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Vector<Integer>ans=new Vector<>();
        for(int i=0;i<nums.length-1;i++)
        {
            for(int j=i+1;j<nums.length;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.add(i);
                    ans.add(j);
                    return new int[]{ans.get(0),ans.get(1)};
                }
            }
        }
        return new int[]{};
       

        
    }
}