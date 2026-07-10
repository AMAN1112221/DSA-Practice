class Solution {
public:
    int maxProduct(vector<string>& words) {
       int n=words.size();
       vector<int>state(n);
       int ans=0;
       for(int i=0;i<n;i++)
       {
        for(auto ch:words[i])
        state[i]=state[i] | 1<< (ch-'a');
       }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((state[i]&state[j])==0)
            ans=max(ans,int(words[i].length()*words[j].length()));
        }
    }
    return ans;
        
    }
};