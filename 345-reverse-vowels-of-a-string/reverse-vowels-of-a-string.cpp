class Solution {
public:
    string reverseVowels(string s) {
        string ans = "";
        stack<char>st;
        for(int i =0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                st.push(s[i]);
            }
        }
        for(int i =0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                ans += st.top();
                st.pop();
            }
            else
            {
                ans +=  s[i];
            }
        }
        return ans;
    }
};