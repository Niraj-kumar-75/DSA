class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        // double ans=INT_MIN;
        for(int i =0;i<k;i++)
        {
            sum += nums[i];
        }
            // double average = sum/k;
            // ans = max(ans,average);
            double ans = sum/k;
        int j=k;
        while(j<nums.size())
        {
            // sum += nums[j];
            sum = sum - nums[j-k] + nums[j];
            double newavg = sum/k;
            ans = max(ans,newavg);
            j++;
        }
        return ans;
    }
};