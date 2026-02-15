class Solution {
public:
    string toHex(int num) {
          if (num == 0) return "0";
        
        unsigned int n = num;   
        string ans = "";
        
        while (n != 0) {
            int digit = n & 15;   
            
            if (digit < 10)
                ans += ('0' + digit);
            else
                ans += ('a' + (digit - 10));
            
            n = n >> 4;  
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};