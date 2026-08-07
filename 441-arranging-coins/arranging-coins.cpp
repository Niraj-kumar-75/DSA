class Solution {
public:
    int arrangeCoins(int n) {
        int used =0;
        int avail = n;
        int ans =0;
        if(n==1) return 1;
        for(int i =1;i<n;i++)
        {
            int req = i%n;
            if(req<=avail)
            {
                used += req;
                ans = i;
                avail -= i;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};