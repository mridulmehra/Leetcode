class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int maxi = INT_MIN;
        int zeros = 0;
        while(r<n){
            int len = 0;
            if(nums[r] == 0){
                zeros++;
            }
            while(zeros>k){
                if(nums[l] == 0) zeros--;
                l++;
            };
            maxi = max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};