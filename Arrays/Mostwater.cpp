/* Problem : Container With Most Water
  plateform :LeetCode
  difficulty:Medium 
  Approach : 
 Two pointer 
  Time Complexity :O(n)
  Space Complexity :O(1)
  */
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int start=0;
        int end=n-1;
        int ans=0;
        while(start<end)
        {
            int mini=min(height[start],height[end]);
            int area=mini*(end-start);
            ans=max(ans,area);
            if(height[start]<height[end])
            start++;
            else
            end--;

        }
        return ans;
    }
};
