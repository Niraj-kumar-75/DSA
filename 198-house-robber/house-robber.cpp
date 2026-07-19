class Solution {
public:
    int maxamount(int n,vector<int>&nums,vector<int>&dp)
    {
        if(n==0) return nums[0];
        if(n==1) return max(nums[0],nums[1]);
        if(dp[n]!=-1)
        return dp[n];

        return dp[n]=max(nums[n]+maxamount(n-2,nums,dp),maxamount(n-1,nums,dp));
    }
    int rob(vector<int>& nums) {
       int n = nums.size()-1;
       vector<int>dp(n+1,-1);
       int result =maxamount(n,nums,dp);
       return result;
    }
};