class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);
        
        prefix[0]=0;
        for(int i =1;i<n;i++)
        {
            prefix[i]=prefix[i-1] + nums[i-1];
        }
        suffix[n-1]=0;
        for(int i =n-2;i>=0;i--)
        {
            suffix[i]=suffix[i+1] + nums[i+1];
        }
        int p1=0;
        while(p1<n)
        {
            if(suffix[p1]== prefix[p1])
            return p1;
            else
            p1++;
        }
        return -1;
    }
};