/* Problem :The Celebrity Problem

  plateform :GFG
  difficulty:Medium 
 Approach : Using Stack
  Time Complexity :O(n)
  Space Complexity :O(n)
  */
class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        
        int n=mat.size();
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            st.push(i);
        }
        while(st.size()>1)
        {
            int first=st.top();
            st.pop();
            int second=st.top();
            st.pop();
            if(mat[first][second]==1 && mat[second][first]==0)
            st.push(second);
            else if(mat[first][second]==0 && mat[second][first]==1)
            st.push(first);
        }
        if(st.empty())
        return -1;
        int num=st.top();
        st.pop();
        int col=0;
        int row=0;
        for(int i=0;i<n;i++)
        {  if(i==num)
            continue;
           row=row+mat[num][i];
           col=col+mat[i][num];
        }
        if(row==0 && col==n-1)
        return num;
        else
        return -1;
    }
        
};
