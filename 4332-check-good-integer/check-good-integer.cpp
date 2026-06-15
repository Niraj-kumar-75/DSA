class Solution {
public:
    bool checkGoodInteger(int n) {
        
        int digitsum=0;
        int squaresum=0;
        while(n)
        {
            int digit = n%10;
            digitsum = digitsum + digit;
            squaresum = squaresum + (digit*digit);
            n = n/10;
        }
        int ans = squaresum - digitsum;
        if(ans>=50) return true;
        else 
        return false;
    }
};