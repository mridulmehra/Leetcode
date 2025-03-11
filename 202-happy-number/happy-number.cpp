class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while(n!=1){
            if(st.count(n)) return false;
            st.insert(n);
            n = getSum(n);
        }
        return true;
    }

private:
    int getSum(int n){
        int sum = 0;
        while(n>0){
            int digit = n%10;
            sum += digit*digit;
            n /= 10; 
        }
        return sum;
    }
};