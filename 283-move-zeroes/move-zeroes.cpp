class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p1=0;
        int p =0;
        int n = nums.size();
        while(p1<n)
        {
            if(nums[p1]!=0)
            {
                nums[p]=nums[p1];
                p++;
                p1++;
            }
            else
            p1++;
        }
        while(p<n)
        {
            nums[p]=0;
            p++;
        }
    }
};