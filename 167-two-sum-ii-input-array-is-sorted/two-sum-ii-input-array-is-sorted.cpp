class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start =0;
        int end = numbers.size()-1;
        long long sum =0;
        vector<int>ans(2,0);
        while(start<end)
        {
            sum = numbers[start] + numbers[end];
            if(sum == target)
            {
                ans[0]=start+1;
                ans[1]=end+1;
                break;
            }
            else if(sum>target)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        return ans;
    }
};