class Solution {
public:
    int  maxSum(vector<int>&a, vector<int>&b) {
        int n1=a.size();
        int n2=b.size();
        
        int p1=0;
        int p2=0;
        long long sum1=0;
        long long sum2=0;
        long long ans=0;
        
        while(p1<n1 && p2<n2)
        {
            if(a[p1]<b[p2])
            {
                sum1=sum1+a[p1];
                p1++;
                
            }
            else if(b[p2]< a[p1])
            {
                sum2=sum2+b[p2];
                p2++;
            }
            else
            {
                sum1=sum1+a[p1];
                sum2=sum2+b[p2];
                ans=ans+max(sum1,sum2);
                sum1=0;
                sum2=0;
                p1++;
                p2++;
            }
            
        };
        
        
        long long tempsum=0;
        if(p1<n1)
            {
                tempsum+=sum1;
                while(p1<n1)
                {
                    tempsum=tempsum+a[p1];
                    p1++;
            
                }
                ans=ans+max(tempsum,sum2);
            }
        else if(p2<n2)
            {
                tempsum+=sum2;
                
                 while(p2<n2)
                {
                    tempsum=tempsum+b[p2];
                    p2++;
                    
                }
                ans=ans+max(tempsum,sum1);
            }
        
        return ans % 1000000007;
        
    }
};