/* Problem : Valid Square
  plateform :LeetCode
  difficulty:Medium 
  problem statement: Given the coordinates of four points in 2D space p1, p2, p3 and p4, return true if the four points construct a square..
  
  Approach : Math  
  I thought that in square all four side be same and both the diagonal should be same and also diagonal square should be equal to two times sides square and
  total four points are given means six ways to find the distance in which two are diagonal and four are sides
  
  Time Complexity :O(1)=6log6;
  Space Complexity :O(1)
  */
class Solution {
public:
    int dis(vector<int>& a, vector<int>& b)
    {
        return ((a[0]-b[0])*(a[0]-b[0])+((a[1]-b[1])*(a[1]-b[1])));
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
    vector<int>v;
    v.push_back(dis(p1,p2));
    v.push_back(dis(p1,p3));
    v.push_back(dis(p1,p4));
    v.push_back(dis(p2,p3));
    v.push_back(dis(p2,p4));
    v.push_back(dis(p3,p4));
    
    sort(v.begin(),v.end());
    if(v[0]>0 && v[0]==v[1] && v[1]==v[2] && v[2]==v[3] && v[4]==v[5] && v[4]==2*v[0])
    return true;
    else
    return false;


       
        
    }
};
