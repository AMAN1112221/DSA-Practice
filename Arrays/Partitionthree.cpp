/* Problem :  Partition Array Into Three Parts With Equal Sum
  plateform :LeetCode
  difficulty:Easy 
  problem statement: Given an array of integers arr, return true if we can partition the array into three non-empty parts with equal sums.
  Approach : Maths
  we have to check for three parts if total sum can be divided into three parts then ans will be true 
  Time Complexity :O(n)
  Space Complexity :O(n)
  */
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) 
    {
        int n=arr.size();
        int totalsum=0;
        float find;
        int find1;
        bool ans=false;
        for(int i=0;i<n;i++)
        {
           totalsum+=arr[i]; // 
        }
        find=totalsum/3.0;// instead of checking by float and comparing we can also do if (totalsum%3 !=0) then return false ;
        find1=totalsum/3;
        if(find==find1)
        {
        int tempsum=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            tempsum+=arr[i];
            if(tempsum==find)
            {
            count++;
            tempsum=0;
            }

        }
        if(count>=3)// this will handle the case which contain all zero elements in array
        ans=true;
        }


        return ans;

        
    }
};
