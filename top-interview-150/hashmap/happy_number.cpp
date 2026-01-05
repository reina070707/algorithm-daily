include <iostream>

class Solution {
public:
    bool isHappy(int n) {
        if (n == 1 || n == 7) {
            return true;
        }
        if (1 < n && n < 10) {
            return false;
        }

        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
            if (n == 0 && sum < 10) {
                break;
            } else if (n == 0 && sum >= 10) {
                n = sum;
                sum = 0;
            }
        }
        return (sum == 1 || sum == 7);
    }
};
