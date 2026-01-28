class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();

        int i = 0;

        // skip white spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // check for signs
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // scan the digits
        long long num = 0;
        while (i < n && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
            if (sign == 1 && num > INT_MAX)
                return INT_MAX;
            if (sign == -1 && -num < INT_MIN)
                return INT_MIN;
            i++;
        }
        return num * sign;
    }
};