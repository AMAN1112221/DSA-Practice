/* Problem : Merge Sorted Array
  plateform :LeetCode
  difficulty:Easy 
  problem statement: You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, 
   representing the number of elements in nums1 and nums2 respectively.
  
  Approach : Pointer
  Taking three pointer and starting with end in nums1 since last m elements are zero so taking largest elements from nums2 and putting at the end of 
nums1
  
  Time Complexity :O(m+n)
  Space Complexity :O(1)
  */
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m + n - 1;
        int j = m - 1;
        int k = n - 1;

        while (k >= 0)
         {
            if (j >= 0 && nums1[j] > nums2[k]) {
                nums1[i] = nums1[j];
                j--;
            } else {
                nums1[i] = nums2[k];
                k--;
            }
            i--;
        }
    }
};
