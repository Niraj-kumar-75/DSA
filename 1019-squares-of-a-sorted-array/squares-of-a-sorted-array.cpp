class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int left = 0;
        int right = nums.size()-1;
        int write = nums.size()-1;
        vector<int>ans(nums.size(),0);

        while(left<=right)
        {
            if(abs(nums[left])<=abs(nums[right]))
            {
                // square = 
                ans[write]=nums[right]*nums[right];
                right--;
                write--;
            }
            else 
            {
                // square = 
                ans[write]=nums[left] * nums[left];
                left++;
                write--;
            }
        }
        return ans;
    }
};