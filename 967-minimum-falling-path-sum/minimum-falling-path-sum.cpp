class Solution {
public:
int n;
int t[100][100];
int solve(vector<vector<int>>& matrix,int row,int col,vector<vector<int>>&dp)
{
    if(row == n-1)
    {
        return matrix[row][col]; 
    }
    if(dp[row][col]!=-100000)
        return dp[row][col];
    
    int sum = matrix[row][col];
    int minsum = INT_MAX;
    if(row+1<n && col-1>=0)
        minsum = min(minsum,sum + solve(matrix,row+1,col-1,dp));
    
    if(row+1<n)
        minsum = min(minsum,sum + solve(matrix,row+1,col,dp));
        
    if(row+1<n && col+1<n)
        minsum = min(minsum,sum + solve(matrix ,row+1,col+1,dp));
    
    return dp[row][col]=minsum;
}
    int minFallingPathSum(vector<vector<int>>& matrix) {
      n= matrix.size();
      vector<vector<int>>dp(n,vector<int>(n,-100000));
    //   memset(t,-100000,sizeof(t));
    //   for(int i =0;i<101;i++)
    //   {
    //     for(int j =0;j<101;j++)
    //     {
    //         t[i][j]= -100000;
    //     }
    //   }
      int row =0;
        int result = INT_MAX;

        for(int col = 0;col<n;col++)
        {
            result = min(result,solve(matrix,row,col,dp));
        }
        return result;
    }
};