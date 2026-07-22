class Solution {
public:
    string removeStars(string s) {
        string ans="";
        stack<char>st;
        int n = s.size();
        int i =0;
        while(i<n)
        {
            if(s[i]!='*')
            {
                st.push(s[i]);
                i++;
            }
            else
            {
                st.pop();
                i++;
            }
        }
        while(!st.empty())
        {
            // ans = ans + st.top();
            ans.push_back(st.top());
            st.pop();
        }
        int k = ans.size()-1;
        int j=0;
        while(j<k)
        {
            char temp = ans[j];
            ans[j]=ans[k];
            ans[k]=temp;
            j++;
            k--;
        }
        return ans;
    }
};