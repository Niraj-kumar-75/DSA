class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>prefix(n,-1);
        vector<int>suffix(n,-1);
        prefix[0]=nums[0];
        for(int i =1;i<n;i++)
        {
                prefix[i]=max(nums[i],prefix[i-1]);
        }
        suffix[n-1]= nums[n-1];
        for(int i=n-2;i>-1;i--)
        {
            suffix[i]=min(nums[i],suffix[i+1]);
        }
        for(int i=0;i<n;i++)
        {
            int sub = prefix[i]-suffix[i];
            if(sub<=k)
            return i;
        }
        return -1;
    }
};