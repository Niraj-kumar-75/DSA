class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long,int>mp;
        mp.insert({0,1});
        int result=0;
        long long sum =0;
        for(int x:nums)
        {
            sum += x;
            int need = sum -k;
            if(mp.find(need)!=mp.end())
            {
                result += mp[need];
            }
            mp[sum]++;
        }
        return result;
    }
};