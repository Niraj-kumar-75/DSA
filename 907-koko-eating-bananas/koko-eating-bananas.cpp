class Solution {
public:
    long long hour(vector<int>&piles,int n,int speed,int h)
    {
        long long hr =0;
        for(int i =0;i<n;i++)
        {
            hr=hr+piles[i]/speed;
            if(piles[i]%speed!=0)
            {
                hr++;
            }
             if(hr > h) return hr;
        }
        return hr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int res=0;
        int high = INT_MIN;
        int ans=0;
        int speed =0;

        for(int i =0;i<n;i++)   //maximum element nikal rhe hai from ARRAY se.
        {
            if(high<piles[i])
            {
                high = piles[i];
            }
        }
        while(low<=high)
        {
            int mid = low +(high-low)/2;
            ans = hour(piles,n,mid,h);
            if(ans>h)
            {
                low = mid +1;
            }
            else
            {
                res = mid;
                high = mid -1;
            }
        }
        return res;
    }
};