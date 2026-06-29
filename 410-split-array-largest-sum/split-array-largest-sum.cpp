class Solution {
public:
    bool ispossible(vector<int>&nums,int mid, int k)
    {
        int part = 1;
        long long currsum =0;
        for(int i =0;i<nums.size();i++)
        {
            currsum = currsum + nums[i];
            if(currsum > mid)
            {
                part++;
                currsum = nums[i];
            }
            else
            {
                continue;
            }
        }
        return part<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int sum =0;
        for(int i =0;i<nums.size();i++)
        {
             sum = sum+nums[i];
        }
        int high = sum;
        int ans = high;
        while(low<=high)
        {
            int mid = low +(high - low)/2;
            if(ispossible(nums,mid,k))
            {
                ans = mid;
                high = mid -1;
            }
            else
            {
                low = mid + 1;
            }

        }
        return ans;
    }
};