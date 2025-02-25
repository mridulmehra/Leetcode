class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size(); 
        int mid;
        int left = 0;
        int right = n - 1;

        while (left <= right) {
            mid = left + (right - left) / 2;

            if (arr[mid] == target) return mid;

            // Left half is sorted
            if (arr[left] <= arr[mid]) {
                if (target >= arr[left] && target <= arr[mid]) 
                    right = mid - 1;
                else 
                    left = mid + 1;
            } 
            // Right half is sorted
            else {
                if (target >= arr[mid] && target <= arr[right]) 
                    left = mid + 1;
                else 
                    right = mid - 1; 
            }
        }
        return -1;
    }
};