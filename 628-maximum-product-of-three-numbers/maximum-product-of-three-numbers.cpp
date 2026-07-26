class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size()-1;
        sort(nums.begin(),nums.end());
        // int temp1 ,temp2=1;
        
        int temp1 =nums[n]*nums[n-1]*nums[n-2];
        
        int temp2 = nums[0]*nums[1]*nums[n];
        
        return max(temp1,temp2);
    }
};