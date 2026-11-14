class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> seen;
        if (s.size() != t.size()) return false;

        for (char c : s) {
            seen[c]++;
        }
        for (char c : t) {
            seen[c]--;
            if (seen[c] < 0) return false;
        }
        return true;
    }
};
