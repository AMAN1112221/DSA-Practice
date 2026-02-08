/* Problem : Sliding Window Maximum

  plateform :LeetCode
  difficulty:HARD
  Approach : 
  To solve this in O(n) i am maintaning the deque d in such a way that it front element is always maximum and also 2nd and 3rd maximum 
  Time Complexity :O(n)
  Space Complexity :O(k)
  */
class Solution {
    public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int>d;
        vector<int>ans;
        for(int i=0;i<k-1;i++)
        {
            if(d.empty())
            d.push_back(i);
            else
            {
                while(!d.empty() && nums[i]>nums[d.back()])
                d.pop_back();

                d.push_back(i);
            }
        }
        for(int i=k-1;i<n;i++)
        {
            while(!d.empty() && nums[i]>nums[d.back()])
            d.pop_back();

            d.push_back(i);

            if(d.front()<=i-k)
            d.pop_front();


            ans.push_back(nums[d.front()]);
        }
        return ans;
        
    }
};
