/* Problem : Move zeroes
  plateform :LeetCode
  difficulty:Easy 
  problem statement:  Replace Elements with Greatest Element on Right Side
  
  Approach : pointer 
  if i will start from index zero then we will need to find greast element each time so start from end and store the largest element everytime
  
  Time Complexity :O(n)
  Space Complexity :O(1)
  */
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int end=arr.size()-2;
        int large=arr[end+1];
        arr[end+1]=-1;
        int temp=0;
        
        for(int i=end;i>=0;i--)
        {
         temp=arr[i];
          arr[i]=large;
          large=max(large,temp);
        }
        return arr;


        
    }
};
