class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {}; // Edge case: empty input

        // Step 1: Sort intervals by start time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        vector<int> merged = intervals[0]; // Start with the first interval

        for (int i = 1; i < intervals.size(); i++) {
            if (merged[1] >= intervals[i][0]) { // Overlapping case
                merged[1] = max(merged[1], intervals[i][1]); // Merge
            } else { 
                ans.push_back(merged); 
                merged = intervals[i]; 
            }
        }
        ans.push_back(merged); 

        return ans;
    }
};
