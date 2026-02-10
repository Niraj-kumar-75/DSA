class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.length() - 1;

        while(i >= 0)
        {
            // skip spaces
            while(i >= 0 && s[i] == ' ')
                i--;

            if(i < 0) break;

            int j = i;

            // word start dhundo
            while(i >= 0 && s[i] != ' ')
                i--;

            // word add karo
            if(!ans.empty())
                ans.push_back(' ');

            ans.append(s.substr(i + 1, j - i));
        }

        return ans;
    }
};
