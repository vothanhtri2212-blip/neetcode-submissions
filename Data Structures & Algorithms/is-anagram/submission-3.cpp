class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> seen;
        if (s.size() != t.size()) return false;

        for (const auto& c : s) {
            seen[c]++;
        }
        for (const auto& c : t) {
            if (!seen.count(c)) return false;
            seen[c]--;
            if (seen[c] < 0) return false;
        }
        return true;
    }
};
