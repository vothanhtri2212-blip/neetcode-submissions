class Solution {
public:
    bool isValid(string s) {
        vector<char> open;
        for (int i = 0; i < s.size(); i++) {
            if (open.empty() && 
            (s[i] == ')' || s[i] == '}' || s[i] == ']')) return false;
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                open.push_back(s[i]);
            }
            else if ((open.back() == '(' && s[i] == ')') ||
                    (open.back() == '{' && s[i] == '}') ||
                    (open.back() == '[' && s[i] == ']')) 
                    open.pop_back();
            else open.push_back(s[i]);
        }
        if (open.empty()) return true;
        else return false;
    }
};
