class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return {-1, -1};

        // Find the first occurrence of target
        int left = 0, right = n - 1, mid;
        int start = -1;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                if (nums[mid] == target) start = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        // If target is not found
        if (start == -1) return {-1, -1};

        // Find the last occurrence of target
        left = start, right = n - 1;
        int end = start;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                if (nums[mid] == target) end = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return {start, end};
    }
};
