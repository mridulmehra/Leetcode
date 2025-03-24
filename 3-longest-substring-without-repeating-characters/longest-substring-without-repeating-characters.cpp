class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> map(256, -1); 
        int length = 0, left = 0, right = 0, n = s.size();

        while (right < n) {
            if (map[s[right]] != -1) {
                left = max(map[s[right]] + 1, left);
            }
            map[s[right]] = right;
            length = max(length, right - left + 1);
            right++;
        }
        return length;
    }
};