class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int rightMax = arr[arr.size()-1];
        for (int i = arr.size() - 2; i >= 0; i--) {
            int cur = arr[i];
            arr[i] = rightMax;
            if (cur > rightMax) rightMax = cur;
        }
        arr[arr.size()-1] = -1;
        return arr;
    }
};