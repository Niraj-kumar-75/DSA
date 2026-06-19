class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int oldsum = nums[0]+nums[1]+nums[2];
        for(int i =0;i<n;i++)
        {
            int left = i+1;
            int right = n-1;
            while(left<right)
            {
                int newsum= nums[i]+nums[left]+nums[right];
                if(abs(target - newsum) < abs(target - oldsum))
                {
                    oldsum = newsum;
                }
                if(newsum<target)
                {
                    left++;
                }
                else if(newsum>target)
                {
                    right--;
                }
                else
                {
                    return newsum;
                }
            }
        }
        return oldsum;
    }
};