class Solution {
public:
    int maxProduct(int n) {
        vector<int>temp;
        int i =0;
        while(n)
        {
            temp.push_back(n%10);
            n= n/10;
            // i++;
        }
        sort(temp.rbegin(),temp.rend());
        int ans = temp[0]*temp[1];
        return ans;
    }
};