class Solution {
public:
    bool ispossible(vector<int>&piles,int speed,int h)
    {
        long long totalhour = 0;
        for(int i =0;i<piles.size();i++)
        {
            totalhour = totalhour +(piles[i]+speed -1)/speed;
        }
        if(totalhour<=h) return true;
        else return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = high;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(ispossible(piles,mid,h))
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return ans;
    }
};