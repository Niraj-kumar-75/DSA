class Solution {
public:
    bool judgeSquareSum(int c) {
        long long j = sqrt(c);
        long long i =0;
        while(i<=j)
        {
            long long square = (i*i + j*j);
            if(square==c)
            {
                return true;
            }
            else if(square<c)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
    }
};