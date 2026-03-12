class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        int count =0;
        for(int i =0;i<=n;i++)
        {
            int j =i;
            while(j>0)
            {
                if(j&1)
                count =count + 1;

                j = j>>1;
            }
            ans.push_back(count);
            count = 0;
        }
        return ans;
    }
};