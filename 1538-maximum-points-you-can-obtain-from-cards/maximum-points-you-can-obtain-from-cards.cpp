class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int maxsum=0;
       int sum=0;
       for(int i=0;i<=k-1;i++)
       {
        sum=sum+cardPoints[i];
       }
       maxsum=max(sum,maxsum);
       int r=cardPoints.size()-1;
       for(int i=k-1;i>=0;i--)
       {
        sum=sum-cardPoints[i];
        sum=sum+cardPoints[r];
        maxsum=max(sum,maxsum);
        r--;
       }
       return maxsum;
    }
};