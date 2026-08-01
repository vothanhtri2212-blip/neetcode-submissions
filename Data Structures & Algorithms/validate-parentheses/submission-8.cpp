class Solution {
public:
    bool isValid(string s) {
        vector<char> open;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                open.push_back(s[i]);
                continue;
            }
            if ((s[i] == ')' || s[i] == ']' || s[i] == '}') && open.empty() == 1)
            return false;
            else {
                if ((open.back() == '(' && s[i] == ')') ||
                    (open.back() == '[' && s[i] == ']') ||
                    (open.back() == '{' && s[i] == '}')
                    )
                open.pop_back();
                else return false;
            }
        }
        if (open.empty() == 1) return true;
        return false;
    }
};
