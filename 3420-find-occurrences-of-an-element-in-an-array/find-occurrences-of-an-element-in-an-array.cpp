class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int n=nums.size();
        unordered_map<int,int>mpp;//freq,ind
        int freq=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==x)
            {
                freq++;
                mpp[freq]=i;
            }
        }
        int m=queries.size();
        for(int i=0;i<m;i++)
        {
            if(mpp.find(queries[i])!=mpp.end())
            {
                queries[i]=mpp[queries[i]];
            }
            else
            queries[i]=-1;
        }
        return queries;

        
    }
};