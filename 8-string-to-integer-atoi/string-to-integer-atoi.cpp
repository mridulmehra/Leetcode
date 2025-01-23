class Solution {
public:
    int myAtoi(string s) {
        if(s.empty()) return 0;
        int ans = 0;
        int i=0;
        int n = s.size();
        while(i<n && s[i] == ' '){
            i++;
        }
        int sign = 1;
        if(i<n && (s[i] == '-' || s[i] == '+')){
            if(s[i] == '-') sign = -1;
            else sign = 1;
            i++;
        }
        while(i<n && s[i]>='0' && s[i]<='9'){
            int digit = s[i] - '0';

            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            ans = ans*10 + digit;
            i++;
        }
        return sign*ans;
    }
};