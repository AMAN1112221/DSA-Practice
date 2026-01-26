/* Problem : Given an array of negative and non-negative integers. You have to make the array
beautiful. An array is beautiful if two adjacent integers, arr[i] and arr[i+1] are either negative or non-negative.
And you can do the following operation any number of times until the array becomes beautiful.
  plateform :GFG
  difficulty:Easy 
 Approach : Using Stack
  Time Complexity :O(n)
  Space Complexity :O(n)
  */
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
      stack<int>s;
      for(int i=0;i<arr.size();i++)
      {
          if(s.empty())
          s.push(arr[i]);
          else if(arr[i]>=0)
          {
              if(s.top()>=0)
              s.push(arr[i]);
              else
              s.pop();  
          }
          else
          {
              if(s.top()<0)
              {
                  s.push(arr[i]);
                  
              }
              else
              s.pop();
          }
          
      }
      vector<int>ans(s.size());
      int i=s.size()-1;
      while(!s.empty())
      {
          ans[i]=s.top();
          i--;
          s.pop();
      }
      return ans;
        
    }
};
