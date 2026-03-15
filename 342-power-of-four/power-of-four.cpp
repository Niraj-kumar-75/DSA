class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0)
        return false;
        if(n>0)
        {
            if((n &(n-1))==0 && (n & 0x55555555) !=0)
        {
            return true;
        }
        else
        return false;
        }
        else
        return false;
    }
};