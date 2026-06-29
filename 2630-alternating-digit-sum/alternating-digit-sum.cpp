class Solution {
public:
    int alternateDigitSum(int n) {
        stack<int>st;
        int count =0;
        int sum =0;
        while(n)
        {
            int digit = n%10;
                n= n/10;
                count++;
                st.push(digit);
        }
        if(count%2==0)
        {
            while(!st.empty())
            {
                if(count%2==0)
                {
                    sum = sum + st.top();
                    count--;
                    st.pop();
                }
                else
                {
                    sum = sum - st.top();
                    count--;
                    st.pop();
                }
            }
        }
        else
        {
            while(!st.empty())
            {
                if(count % 2 !=0)
                {
                    sum = sum + st.top();
                    count--;
                    st.pop();
                }
                else
                {
                    sum = sum - st.top();
                    count--;
                    st.pop();
                }
            }
        }
        return sum;
    }
};