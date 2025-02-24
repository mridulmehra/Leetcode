class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string sorti;
        for(int i=0 ; i<n ; i++){
            if(isalnum(s[i])){
                sorti += tolower(s[i]);
            }
        }
        int i=0;
        int j=sorti.size()-1;
        while(i<j){
            if(sorti[i]!=sorti[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};