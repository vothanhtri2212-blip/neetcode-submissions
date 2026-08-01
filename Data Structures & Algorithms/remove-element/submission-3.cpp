class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                count = count + 1;
                continue;
            }
            nums[i-count] = nums[i];
        }
        int k = nums.size() - count;
        return k;
    }
};