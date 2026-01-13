/* Problem : Find N Unique Integers Sum up to Zero
  plateform :LeetCode
  difficulty:Easy 
  problem statement: Given an integer n, return any array containing n unique integers such that they add up to 0.
  Approach : Maths
   for every odds n if it contain 0 and interger with opposite sign then it will be zero and for even n if it contain opposite sign with out zero then
   sum will be zero 
  Time Complexity :O(n)
  Space Complexity :O(n)
  */
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
        int i=1;
        if(n%2==1)
        {
        v.push_back(0);

        for( i=1;i<=(n-1)/2;i++)
        {
           v.push_back(i);
           v.push_back(-1*i);
        }
        }
        else
        {
           for( i=1;i<=(n)/2;i++)
        {
           v.push_back(i);
           v.push_back(-1*i);
        } 
        }
        return v;

        
    }
};
