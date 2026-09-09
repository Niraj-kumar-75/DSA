class Solution {
public:
long long solve(int i,int t,vector<int>&coins,vector<vector<int>>&dp)
{
    if(i<0||t<0) return 0;
    if(t==0) return 1;
    // if(t<0) return 0;
    if(dp[i][t]!=-1) return dp[i][t];
    long long pick=  solve(i,t-coins[i],coins,dp);
    long long skip = solve(i-1,t,coins,dp);
    return dp[i][t]=pick+skip;
}
    int change(int amount, vector<int>& coins) {
        int m = coins.size()-1;
        vector<vector<int>>dp(m+1,vector<int>(amount+1,-1));
        return solve(m,amount,coins,dp);
    }
};