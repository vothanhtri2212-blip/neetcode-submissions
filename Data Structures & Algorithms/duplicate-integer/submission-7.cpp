class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;
        for (const auto& num : nums) {
            if (seen.count(num)) return true;
            seen[num]++;
        }
        return false;
    }
};