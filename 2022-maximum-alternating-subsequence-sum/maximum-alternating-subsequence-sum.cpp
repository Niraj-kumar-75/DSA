class Solution {
public:
    int n;
    typedef long long ll;
    long long dp[1000001][2];
    ll solve(int idx,vector<int>&nums,bool flag)
    {
        if(idx>=n)
        {
            return 0;
        }
        if(dp[idx][flag]!=-1)
        return dp[idx][flag];
        ll skip =solve(idx+1,nums,flag);
        int val = nums[idx];
        if(flag==false)
        {
            val = -val;
        }
        ll pick = solve(idx+1,nums,!flag) +val;
        return dp[idx][flag] = max(skip,pick);
    }
    long long maxAlternatingSum(vector<int>& nums) {
        n = nums.size();
       memset(dp,-1,sizeof(dp));
       return solve(0,nums,true);
    }
};