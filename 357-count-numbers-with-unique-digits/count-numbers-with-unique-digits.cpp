class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        int ans =10;
        int unique = 9;
        int av =9;
        for(int i =2;i<=n && av>0;i++)
        {
            unique = unique * av;
            ans = ans + unique;
            av--;
        }
        return ans;
    }
};