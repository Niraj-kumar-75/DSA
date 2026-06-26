class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col = matrix[0].size();
        if (matrix.empty() || matrix[0].empty()) return false;
        int start =0;
        int end = (rows * col)-1;
        while(start<=end)
        {
            int mid = start +(end - start) /2;
            int midelement = matrix[mid/col][mid%col];
            if(midelement == target)
            {

             return true;
            }
            else if(midelement<target)
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        return false;
    }
};