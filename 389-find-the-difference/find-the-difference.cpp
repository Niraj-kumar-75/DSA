class Solution {
public:
    char findTheDifference(string s, string t) {
        // int n1 = s.size();
        // int n2 = t.size();
        // int n = n1* n2;
        char ans =0;
        // string temp ="";
        for (char c :s)
        {
            ans ^=c;
        }
        for(char d :t)
        {
            ans ^=d;
        }
        return ans;
    }
};