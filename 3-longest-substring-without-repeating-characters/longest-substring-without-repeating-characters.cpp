class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> vis(256,0);
        int l=0;
        int r=0;
        int cnt=0;
        int maxi = 0;
        while(r<s.size()){
            if(vis[s[r]] == 0){
                cnt++;
                vis[s[r]]++;
                r++;
            }else{
                vis[s[l]]--;
                l++;
                cnt--;
            }
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};