class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int mid;
        int left = 0;
        int right = n-1;
        while(left<=right){
            mid = left + (right - left)/2;
            if(nums[mid] == target) return mid;
            if(nums[left]<=nums[mid]){
                if(target<=nums[mid] && target>=nums[left])  right = mid -1;
                else left = mid + 1;
            }else{
                if(target<=nums[right] && target>=nums[mid]) left = mid + 1;
                else right = mid - 1; 
            }
        }
        return -1;
    }
};