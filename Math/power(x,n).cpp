/* Problem : Power(x,n)
  plateform :LeetCode
  difficulty:Medium 
  problem statement: Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
  
  Approach :Binary Exponentiation 
  solving by recursion will result stack overflow
  
  here the power range is too long means we can not use simple loop so here i am using binary exponentiation in which power is converted it into 
  binaray form and then calculated as a binary weighted and also finding power in form of squaring 1,2,4,8 means doing just half iteration 
  Time Complexity :O(logn) 
  Space Complexity :O(1)
  */
class Solution {
public:
    double myPow(double x, int n) {
        long binForm =n;
   if(n<0)
   {
    x=1/x;
    binForm=-1*binForm;
   }
   double ans=1;
   while(binForm >0)
   {
    if(binForm %2==1)
    {
        ans=ans*x;
    }
    x=x*x;
    binForm=binForm/2;
   }
   return ans;
     }
};
