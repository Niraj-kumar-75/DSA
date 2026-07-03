class Solution {
public:
    int totalMoney(int n) {
        int sum =0;
        int count =0;
        int n1 = n/7;
        int n2= n%7;
        int i =1;
        for(i ;i<=n1;i++)
        {
            for(int j =i;j<=(7+count);j++)
            {
                sum = sum + j;
            }
            count++;
        }
        for(int k =count+1;k<(n2+count+1);k++)
        {
            sum = sum +k;
        }
        return sum;
    }
};