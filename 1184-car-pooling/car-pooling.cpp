class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<long long>diff(1005,0);
        int n=trips.size();
        for(int i=0;i<n;i++)
        {
            int pass=trips[i][0];
            int start=trips[i][1];
            int end=trips[i][2];
            diff[start]+=pass;

            
            diff[end]+=-1*pass;
        }
        long long sum=0;
        for(int i=0;i<diff.size();i++)
        {
            sum=sum+diff[i];
            if(sum>capacity)
            return false;
        }  
        return true;    
    }
};