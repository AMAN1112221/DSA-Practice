class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int ans=n;
        sort(intervals.begin(),intervals.end());
        for(int i=1;i<n;i++)
        {
            int a=intervals[i-1][0];
            int b=intervals[i-1][1];
            int c=intervals[i][0];
            int d=intervals[i][1];

            
            if((a<c)&&(b>=d))
            {
                ans--;
                intervals[i]=intervals[i-1];

            }
            if(a==c)
            {
                if(d>=b)
                ans--;
            }
            
        }
        return ans;
        
    }
};