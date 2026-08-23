class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       vector<int>ans(2,0);

       int start =0;
       int end =numbers.size()-1;

       while(start<end)
       {
            int sum = numbers[start] + numbers[end];
            if(sum == target)
            {
                ans[0]= start+1;
                ans[1]= end+1;
                // ans.push_back(start);
                // ans.push_back(end);
                break;
            }
            else if(sum >target)
            {
                end --;
            }
            else
            {
                start++;
            }
       }
       return ans;

    }
};