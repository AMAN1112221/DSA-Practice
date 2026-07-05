class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<long long>arr(n,0);
        for(int i=0;i<shifts.size();i++)
        {
            int l=shifts[i][0];
            int r=shifts[i][1];
            int x=shifts[i][2];
            if(x==0)
            x=-1;

            arr[l]=arr[l]+x;
            if(r+1<arr.size())
            {
                arr[r+1]=arr[r+1]-x;
            }
        }
        long long sum=0;
        for(int i=1;i<arr.size();i++)
        {
            arr[i]=arr[i]+arr[i-1];
        }
        for(int i=0;i<s.size();i++)
        {
            long long shift = ((arr[i] % 26) + 26) % 26;
            s[i] = 'a' + (s[i]-'a'+shift)%26;
        }
        return s;
        
    }
};