class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int temp = num;
        while(temp > 0){
            int it = temp % 10;
            if(it != 0 && num % it == 0) count++;
            temp = temp/10;
        }
        return count;
    }
};