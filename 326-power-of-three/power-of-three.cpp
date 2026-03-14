class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        if(n==0)
        return false;
        if(n>0)
        {
        if(1162261467%n==0)
        return true;
        else
        return false;
        }
        else
        return false;
    }
};