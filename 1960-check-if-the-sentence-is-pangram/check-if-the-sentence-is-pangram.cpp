class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>ans(26,0);
        int n = sentence.length();
        for(int i=0;i<n;i++)
        {
            int index = sentence[i]-'a';
            ans[index]=1;
        }
        for(int i =0;i<ans.size();i++)
        {
            if(ans[i]!=1)
            return false;
        }
        return true;
    }
};