class Solution {
public:
    int pivotInteger(int n) {
        int totalsum = n*(n+1)/2;
        int x = sqrt(totalsum);
        if(x*x == totalsum)
        return x;
        else
        return -1;
    }
};