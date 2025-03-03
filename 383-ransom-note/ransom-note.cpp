class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> vc(26,0);
        for(char it : magazine){
            vc[it - 'a']++;
        }
        for(char c : ransomNote){
            if(vc[c - 'a'] == 0) return false;
            vc[c - 'a']--;
        }
        return true;
    }
};