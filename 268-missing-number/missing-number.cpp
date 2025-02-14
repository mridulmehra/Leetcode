class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        int maxi = INT_MAX;
        for(auto it : nums){
            st.insert(it);
            maxi = max(maxi,it);
        }
        for(int i=0 ; i<=maxi ; i++){
            if(st.find(i) != st.end()) continue;
            else return i;
        }
        return -1;
    }
};