class Solution {
public:
    // helper function: next number (sum of squares of digits)
    int nextNum(int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        do {
            slow = nextNum(slow);           // 1 step
            fast = nextNum(nextNum(fast));  // 2 steps
        } while (slow != fast);

        return slow == 1;
    }
};