class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int st=1;
        int en=1;
        int maxi = INT_MIN;
        for(int i=0 ; i<n ; i++){
            if(st == 0) st = 1;
            st *= nums[i];
            if(en == 0) en = 1;
            en *= nums[n-i-1];
            maxi = max(maxi,max(en,st));
        }
        return maxi;
    }
};