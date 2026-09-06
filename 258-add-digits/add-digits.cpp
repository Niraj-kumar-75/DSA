class Solution {
public:
int sum(int n)
{
    if(n==0) return 0;
    int num = (n%10 + sum(n/10));
    if(num/10==0) return num;
    else return sum(num);
}
    int addDigits(int num) {
        // if(num==0) return 0;
       return sum(num);
    }
};