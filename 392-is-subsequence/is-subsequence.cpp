class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n == m && n==0) return true;
        int j=0;
        int i=0;
        while(i<m){
            if(t[i] == s[j]) j++;
            if(j == n) return true;
            i++;
        }
        return false;
    }
};