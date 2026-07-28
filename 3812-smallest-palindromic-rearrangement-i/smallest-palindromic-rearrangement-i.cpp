class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>freq(26,0);
        for(char c:s)
        {
            freq[c-'a']++;
        }
        int oddcount =0;
        string middlechar = "";
        for(int i = 0;i< 26;i++)
        {
            if(freq[i]%2!=0)
            {
                oddcount++;
                middlechar = string(1,i+'a');
            }
        }
        if(oddcount>1) return "";
        string firsthalf ="";
        for(int i =0;i<26;i++)
        {
            if(freq[i]>0)
            {
                firsthalf += string(freq[i]/2,i+'a');
            }
        }
        string  secondhalf = firsthalf;
        reverse(secondhalf.begin(),secondhalf.end());
        return firsthalf + middlechar + secondhalf;
    }
};