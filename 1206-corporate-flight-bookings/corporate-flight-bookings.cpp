class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>ans(n,0);
        int book=bookings.size();
        for(int i=0;i<book;i++)
        {
            int start=bookings[i][0];
            int last=bookings[i][1];
            int seat=bookings[i][2];
            ans[start-1]+=seat;
            if(last<n)
            {
                ans[last]-=seat;
            }
        }
        for(int i=1;i<n;i++)
        {
            ans[i]=ans[i]+ans[i-1];
        }
        return ans;
    }
};