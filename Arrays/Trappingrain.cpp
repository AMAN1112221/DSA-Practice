/* Problem : Trapping rain water
  plateform :LeetCode
  difficulty:HARD
  Approach :water can be stored if its left and right is greater then its height so finding the left max and right max the finding the total water.
  Time Complexity :O(n)
  Space Complexity :O(n)
  */
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax(n);
        vector<int>rightmax(n);
        leftmax[0]=0;
        rightmax[n-1]=0;
        int left=0;
        int right=0;
        int water=0;
        int minheight=0;
        for(int i=1;i<n;i++)
        {
            if(height[i-1]>left)
            {
                left=height[i-1];
                leftmax[i]=left;
            }
            else
            {
                leftmax[i]=left;
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(height[i+1]>right)
            {
                right=height[i+1];
                rightmax[i]=right;
            }
            else
            {
                rightmax[i]=right;
            }
        }
        for(int i=0;i<n;i++)
        {
            minheight=min(leftmax[i],rightmax[i]);
            if((minheight-height[i])>=0)
            {
                water=water+(minheight-height[i]);
            }
        }
        return water;


        
    }
};
