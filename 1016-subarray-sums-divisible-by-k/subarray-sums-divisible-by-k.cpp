class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<long long ,int>mp;
        mp[0]=1;
        long long presum=0;
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            presum=presum+ nums[i];
            int rem= ((presum % k) + k) % k;
       if(mp.find(rem) != mp.end())
        {
            cnt = cnt + mp[rem];
        }
            mp[rem]++;
        }
        return cnt;

        
        
    }
};