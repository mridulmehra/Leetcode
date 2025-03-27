class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        if (x == INT_MIN) {
            return 0; 
        }
        int sign = 1;
        
        if(x<0){
            x *= -1;
            sign = -1;
        }
        while(x>0){
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && x % 10 > 7)) {
                return 0;
            }
            ans = ans*10 + (x % 10);
            x /= 10;
        }
        return sign*ans;
    }
};