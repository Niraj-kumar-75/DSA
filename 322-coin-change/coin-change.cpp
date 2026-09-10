class Solution {
public:
int solve(int i,int t,vector<int>& coins,vector<vector<int>>&dp)
{
    if(t==0) return 0;
    if(t<0 || i<0) return 1e9;

    if(dp[i][t]!=-1)
    return dp[i][t];

    int pick= 1+solve(i,t-coins[i],coins,dp);
    int skip = solve(i-1,t,coins,dp);
    return dp[i][t]=min(pick,skip);
}
    int coinChange(vector<int>& coins, int amount) {
       int n= coins.size();
       vector<vector<int>>dp(n,vector<int>(amount+1,-1));
       
       int ans=solve(n-1,amount,coins,dp); 
       if(ans>=1e9) return -1;
       return ans;
    }
};