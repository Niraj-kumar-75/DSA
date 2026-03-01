class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int ans = 0;
        for(auto ch:s)
        {
            if(ch=='(')
            {
                count++;
            }
            else if(ch ==')')
            {
                if(ans<count)
                {
                    ans = count;
                }
                count --;
            }
        }
        return ans;
    }
};