class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int cur = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) cur = 0;
            else cur = cur + 1;
            if (cur > max) max = cur;
        }
        return max;
    }
};