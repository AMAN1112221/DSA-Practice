class Solution {
public:
    int maxProduct(int n) {
        int d1=INT_MIN;
        int d2=INT_MIN;
        while(n)
        {
            int a=n%10;
            if(a>=d1)
            {
                d2=d1;
                d1=a;
            }
            if(a>d2 && a<d1)
            d2=a;

            n=n/10;
        }
        return d1*d2;
        
    }
};