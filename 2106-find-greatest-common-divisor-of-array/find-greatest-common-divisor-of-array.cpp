class Solution {
public:
int find(int a,int b)
{
    while(b!=0)
    {
        int rem = a%b;
        a= b;
        b=rem;
    }
    return a;
}
    int findGCD(vector<int>& nums) {
        int low = nums[0];
        int high = nums[0];
        for(int i =1;i<nums.size();i++)
        {
            low = min(low,nums[i]);
            high = max(high,nums[i]);
        }
        return find(high,low);
    }
};