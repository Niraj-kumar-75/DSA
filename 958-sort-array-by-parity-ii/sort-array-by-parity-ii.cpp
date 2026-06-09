class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>ans;
        queue<int>q1;
        queue<int>q2;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                q1.push(nums[i]);
            }
            else
            {
                q2.push(nums[i]);
            }
        }
        for(int i =0;i<nums.size();i++)
        {
            if(i%2==0)
            {
            int temp = q1.front();
            ans.push_back(temp);
                q1.pop();
            }
            else
            {
                int temp = q2.front();
                ans.push_back(temp);
                q2.pop();
            }
        }
        return ans;
    }
};