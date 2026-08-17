class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long num = 0;

        // Skip leading spaces
        while (i < s.length() && isspace(s[i])) {
            i++;
        }

        // Sign
        if (i < s.length() && s[i] == '-') {
            sign = -1;
            i++;
        } 
        else if (i < s.length() && s[i] == '+') {
            i++;
        }

        // Read digits
        while (i < s.length() && isdigit(s[i])) {
            int digit = s[i] - '0';

            num = num * 10 + digit;

            // Check overflow
            if (sign == 1 && num > INT_MAX) {
                return INT_MAX;
            }

            if (sign == -1 && -num < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return (int)(num * sign);
    }
};