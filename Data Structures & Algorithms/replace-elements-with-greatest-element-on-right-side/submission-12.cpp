class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max = arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        for (int i = arr.size() - 2; i >= 0; i--) {
            int curMax = max;
            if (arr[i] > max) max = arr[i];
            arr[i] = curMax;
        }
        return arr;
    }
};