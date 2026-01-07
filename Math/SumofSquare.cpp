/* Problem : Sum of Square Numbers
  plateform :LeetCode
  difficulty:Medium 
  problem statement: Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c..
  
  Approach :Basic math or Two pointer 
  Baisc math :-let only one num a,  sqrt of c will  be the max possible num that will be a if i will take another num b then a will be always less then sqrt of c in case of sum , so i started with 0 to sqrt of c;
  Two pointer :-
  
  Time Complexity :O(sqrtn) or two pointer  O(sqrt c)
  Space Complexity :O(1)
  */
class Solution {
public:
    bool judgeSquareSum(int c) {
        int b=sqrt(c);
        for(int i=0;i<=b;i++)
        {
        int a=sqrt(c-i*i);
        if(c==a*a+i*i)
        return true;
        
        }
        return false;
        
    }
};


// Two pointer Approach 
class Solution {
public:
    bool judgeSquareSum(int c) {
      long long a=0;
     long long b=sqrt(c);
     
       while(a<=b)
         {
            long long sum=a*a+b*b;
      if(sum==c)
        return true;
      else if(sum<c)
        a++;
      else
        b--;
         }

      return false;
    }}
