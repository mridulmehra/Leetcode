class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l=0,r=0;
        int maxf = 0;
        int maxlen = 0;
        vector<int> vc(26,0);
        while(r<n){
            vc[s[r] - 'A']++;
            maxf = max(maxf,vc[s[r]-'A']);
            if(( r-l+1 - maxf) > k){
                vc[s[l] - 'A']--;
                maxf=0;
                for(auto it : vc){
                    maxf = max(maxf,it);
                }
                l++;
            }
            maxlen = max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};