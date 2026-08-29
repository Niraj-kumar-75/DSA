class Solution {
public:
    bool isPerfectSquare(int num) {
        int temp = num;
        int start =0;
        int end = temp;
        while(start<=end)
        {
            long long mid = start +(end-start)/2;
            long long square = mid*mid;
            if(square==num)
            return true;
            else if(square>num)
            {
                end = mid-1;
            }
            else
            start = mid+1;
        }
        return false;
    }
};