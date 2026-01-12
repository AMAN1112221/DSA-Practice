/* Problem : Minimum Time Visiting All Points
  plateform :LeetCode
  difficulty:Easy 
  problem statement: On a 2D plane, there are n points with integer coordinates points[i] = [xi, yi]. Return the minimum time in seconds to visit all the points in the order given by points.
  
  Approach : Math
  since we have to reach from one point to another point so here we can see the absolute difference between x coordinate and y coordinate can be ans but we 
  will choose the max time beacause we have to reach at that points.
  
  Time Complexity :O(n)
  Space Complexity :O(1)
  */
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n=points.size();
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
          int x=points[i][0]-points[i+1][0];
          int y=points[i][1]-points[i+1][1];
          if(x<0)
          x=-1*x;
          if(y<0)
          y=-1*y;

          if(x>=y)
          ans=ans+x;
          else
          ans=ans+y;
        }
        return ans;
        
    }
};
