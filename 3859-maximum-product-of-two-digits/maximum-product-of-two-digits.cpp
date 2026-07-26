class Solution {
public:
    int maxProduct(int n) {
        vector<int>temp;
        int max1 = INT_MIN;
        int max2 = INT_MIN;

        // int i =0;
        while(n)
        {
            // temp.push_back(n%10);
             if(n%10>=max1)
             {
                max2 = max1;
                max1 = n%10;
             }
             else if(n%10>=max2)
             {
                max2 = n%10;
             }
            n= n/10;
            // i++;
        }
        // sort(temp.rbegin(),temp.rend());
        // for(int num:temp)
        // {
        //     if(num>=max1)
        //     {
        //         max2 = max1;
        //         max1 = num;
        //     }
        //     else if(num>=max2)
        //     {
        //         max2 = num;
        //     }
        // }
        int ans = max1 * max2;

        return ans;
    }
};