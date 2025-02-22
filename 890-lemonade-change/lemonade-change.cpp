class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5=0;
        int d10=0;
        int d20=0;
        for(auto it : bills){
            if(it == 5) d5++;
            else if(it == 10){
                d5--;
                d10++;
            }
            else{
                d5--;
                if(d10>0){
                    d10--;
                }else{
                    d5--;
                    d5--;
                }
            }
            if(d5<0 || d10<0) return false;
        }
        return true;
    }
};