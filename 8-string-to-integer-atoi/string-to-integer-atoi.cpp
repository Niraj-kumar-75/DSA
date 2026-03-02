class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int n = s.length();
        long long ans = 0;   // overflow safe
        int sign = 1;

        // 1️⃣ Skip leading spaces
        while(i < n && s[i] == ' ') {
            i++;
        }

        // 2️⃣ Check sign
        if(i < n && (s[i] == '+' || s[i] == '-')) {
            if(s[i] == '-') sign = -1;
            i++;
        }

        // 3️⃣ Read digits
        while(i < n && s[i] >= '0' && s[i] <= '9') {
            ans = ans * 10 + (s[i] - '0');

            // 4️⃣ Overflow check
            if(ans * sign > INT_MAX) return INT_MAX;
            if(ans * sign < INT_MIN) return INT_MIN;

            i++;
        }

        // 5️⃣ Final result
        return ans * sign;
    }
};