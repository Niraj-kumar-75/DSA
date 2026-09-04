class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int i=0;
        int n= nums.size();
        while(i<n)
        {
            maxi = max(maxi,nums[i]);
            int j =i;
        int mini = INT_MAX;
            while(j<n)
            {
                mini = min(mini,nums[j]);
                j++;
            }
            int sub = maxi-mini;
            if(sub<=k)
            return i;
            else
            i++;
        }
        return -1;
    }
};