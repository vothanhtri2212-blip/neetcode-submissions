#include <stack>
#include <string>

class Solution {
public:
    bool isValid(string s) {
        stack<char> bracketStack;
        for (int i = 0; i < s.length(); i++) {
            char current = s[i];
            if (current == '(' || current == '{' || current == '[') {
                bracketStack.push(current);
            } 
            else {
                if (bracketStack.empty()) {
                    return false;
                }
                char top = bracketStack.top();
                if ((current == ')' && top == '(') || 
                    (current == '}' && top == '{') || 
                    (current == ']' && top == '[')) {
                    bracketStack.pop();
                } else {
                    return false;
                }
            }
        }
        return bracketStack.empty();
    }
};
