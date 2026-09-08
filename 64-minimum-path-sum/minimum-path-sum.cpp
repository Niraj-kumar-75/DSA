class Solution {
public:
int solve(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>>&dp)
{
    int right =0;
    int down =0;
    if(i==m-1 && j== n-1) return grid[i][j];
    // if(i<0 || i>=m || j<0 || j>=n)
    // return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(i==m-1) return grid[i][j] + solve(i,j+1,m,n,grid,dp);
    else if(j==n-1) return grid[i][j] + solve(i+1,j,m,n,grid,dp);
    else
    {
         right =grid[i][j] +solve(i,j+1,m,n,grid,dp);
        down = grid[i][j] + solve(i+1,j,m,n,grid,dp);
    }
    

    return dp[i][j] = min(right,down);
}
    int minPathSum(vector<vector<int>>& grid) {
        // int m = sizeof(grid)/sizeof(grid[0]);
        // int n = sizeof(grid[0])/sizeof(grid[0][0]);
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
       return solve(0,0,m,n,grid,dp);
    }
};