class Solution {
public:
        int findocc(int lower,int higher,vector<int>&candle,vector<int>&prefix)
        {
            int low=0;
            int high=candle.size()-1;
            int first=-1;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(candle[mid]>=lower)
                {
                    first=mid;
                    high=mid-1;
                }
                else
                low=mid+1;
            }
             low=0;
             high=candle.size()-1;
            int last=-1;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(candle[mid]<=higher)
                {
                    last=mid;
                    low=mid+1;
                }
                else
                high=mid-1;
            }
            if((first>last) || first==-1 || last ==-1)
            return 0;
            return (prefix[candle[last]]-prefix[candle[first]]);
        }
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        vector<int>prefix;
        int sum=0;
        vector<int>candle;
        vector<int>ans;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='|')
            candle.push_back(i);

            if(s[i]=='*')
            {
                sum++;
                
            }
            prefix.push_back(sum);

        }
        for(int i=0;i<queries.size();i++)
        {
            int count=0;
            count=findocc(queries[i][0],queries[i][1],candle,prefix);
            ans.push_back(count);
        }
        return ans;
        
    }
};