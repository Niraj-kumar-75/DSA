class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1 =0;
        int sum2 =0;
        for(int i =0;i<s.size();i++)
        {
            sum1 += (s[i]-'0');
        }
        for(int j =0;j<t.size();j++)
        {
            sum2 += (t[j]-'0');
        }
        int temp = sum2 - sum1;
        char ans = temp + '0';
        return ans;
    }
};