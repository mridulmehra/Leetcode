class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int leftstar = 1;
        for(int i=0 ; i<n ; i++){
            ans[i] = leftstar;
            leftstar *= nums[i];
        }

        int rightstar = 1;
        for(int i=n-1 ; i>=0 ; i--){
            ans[i] *= rightstar;
            rightstar *= nums[i];
        }

        return ans;
    }
};