class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        // int n = s.size();
        // stack<char>st;
        // st.push(s[0]);
        for(char c :s)
        {
            if(!ans.empty() && ans.back()==c)
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(c);
            }
        }
        // for(int i =0;i<st.size();i++)
        // {
        //     ans += st.top();
        //     st.pop();
        // }
        //  reverse(ans.begin(),ans.end());
         return ans;
    }
};