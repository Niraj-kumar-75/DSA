class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum =0;
        // int max_sum =INT_MIN;
        for(int i =0;i<k;i++)
        {
            sum = sum +nums[i];
        }
        int max_sum =sum;
        for(int i =k;i<nums.size();i++)
        {
            sum = sum +nums[i]-nums[i-k];
            max_sum = max(max_sum,sum);
        }
        // double ans =max_sum/k;
        return (double)max_sum/k;
    }
};