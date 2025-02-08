
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        // Initialize the answer array with 1's
        vector<int> answer(n, 1);
        
        // Calculate the left product for each index
        int left_prod = 1;
        for (int i = 0; i < n; i++) {
            answer[i] = left_prod;
            left_prod *= nums[i];
        }
        
        // Calculate the right product for each index and update the answer array
        int right_prod = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= right_prod;
            right_prod *= nums[i];
        }
        
        return answer;
    }
};
