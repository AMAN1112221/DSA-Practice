 /*Problem : Rearrange Array Elements by Sign
  plateform :LeetCode
  difficulty:Medium
  problem statement: Rearrange the array in such a way that the interger comes in positve then negative alternate .
  
  Approach : Two pointer or Auxiliary Array approach
  Question it self saying that first element should be positve then negative means in every even index its should be positive and every odd index it should be negative 
  i made two seperate array in which positive and negative elements are stored in distinct array and then mearging it 
  Time Complexity :O(n) for two pointer and O(n) for Auxiliary Array approach
  Space Complexity :O(n) for two pointer and O(n) Auxiliary Array approach
  */
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ev;
        vector<int>od;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            ev.push_back(nums[i]);
            else
            od.push_back(nums[i]);
        }
        for(int i=0;i<n/2;i++)
        {
            ans.push_back(ev[i]);
            ans.push_back(od[i]);
        }
        return ans;
        
    }
};


// two pointer approach
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0;
        int neg=1;
        int n=nums.size();
        vector<int>ans(n);
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
            ans[pos]=nums[i];
            pos=pos+2;
            }
            else
            {
                ans[neg]=nums[i];
                neg=neg+2;
            }
        }
        return ans;
        
    }
};
