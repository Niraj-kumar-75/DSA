class Solution {
public:
    int climb(int n,vector<int>&dp){
        
        // if(n<=2) return n;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=climb(n-2,dp)+climb(n-1,dp);
    }
    int climbStairs(int n) {
        if(n<=2) return n;
        vector<int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        
      return climb(n,dp);
    }
};