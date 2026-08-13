class Solution {
public:

    vector<int> findmax(int col, vector<vector<int>>& mat) {
        int maxi = INT_MIN;
        int index = -1;

        int n = mat.size();

        for (int i = 0; i < n; i++) {
            if (mat[i][col] > maxi) {
                maxi = mat[i][col];
                index = i;
            }
        }

        return {maxi, index};
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        int low = 0;
        int high = m - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            
            vector<int> index_maxi = findmax(mid, mat);

            int maxi = index_maxi[0];
            int row = index_maxi[1];

            int left = (mid > 0) ? mat[row][mid - 1] : -1;
            int right = (mid < m - 1) ? mat[row][mid + 1] : -1;

            
            if (mat[row][mid] > left &&
                mat[row][mid] > right) {

                return {row, mid};
            }

           
            if (left > mat[row][mid]) {
                high = mid - 1;
            }

            
            else {
                low = mid + 1;
            }
        }

        return {-1, -1};
    }
};