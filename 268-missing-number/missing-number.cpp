class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int num = 0;
        int numf = n;
        for(int i=0 ; i<n ; i++){
            num += nums[i];
            numf += i;
        }
        return numf - num;

    }
};