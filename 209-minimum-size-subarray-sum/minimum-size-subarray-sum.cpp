class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum =0;
        int left =0;
        int ans=INT_MAX;
        for(int right =0;right<nums.size();right++)
        {
            sum = sum+nums[right];
            while(sum>=target)
            {
                int window_size=right-left+1;
                ans = min(ans,window_size);
                sum = sum-nums[left];
                left++;
            }
        }
        return ans==INT_MAX ?0:ans;
    }
};