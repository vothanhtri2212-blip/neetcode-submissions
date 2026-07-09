class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            if (i == arr.size() - 1) {
                arr[i] = -1;
                return arr;
            }
            int max = 0;
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[j] > max) max = arr[j];
            }
            arr[i] = max;
        }
    }
};