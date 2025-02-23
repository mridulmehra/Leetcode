class Solution {
public:
    unordered_map<string, bool> memo;
    
    bool result(string &s, int cnt, int ind, int n) {
        if (ind == n) return cnt == 0;
        if (cnt < 0) return false;

        string key = to_string(cnt) + "_" + to_string(ind);
        if (memo.find(key) != memo.end()) return memo[key];

        if (s[ind] == '(') cnt++;
        else if (s[ind] == ')') cnt--;
        else {
            return memo[key] = (result(s, cnt + 1, ind + 1, n) || 
                                result(s, cnt - 1, ind + 1, n) || 
                                result(s, cnt, ind + 1, n));
        }

        return memo[key] = result(s, cnt, ind + 1, n);
    }
    
    bool checkValidString(string s) {
        return result(s, 0, 0, s.size());  
    }
};
