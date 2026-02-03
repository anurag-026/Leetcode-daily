class Solution {
public:
    int myAtoi(string s) {
        long long num = 0;
        int n = s.size();
        bool sign = 1;
        int i = 0;

        while (s[i] == ' ') {
            i++;
        }
        if (s[i] == '-') {
            sign = 0;
            i++;
        }else if (s[i] == '+') {
            sign = 1;
            i++;
        }

        for (i; i < n; i++) {
            if(num>INT_MAX) return sign == 1 ? INT_MAX : INT_MIN;

            if (s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
            } else {
                break;
            }
        }
        num = sign == 1 ? num : 0 - num;
        if(num < INT_MIN) num = INT_MIN;
        if(num > INT_MAX) num = INT_MAX;

        return num;
    }
};