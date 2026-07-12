class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                record.push_back(record[record.size()-1] + record[record.size()-2]);
            }
            else if (operations[i] == "C") {
                record.pop_back();
            }
            else if (operations[i] == "D") {
                record.push_back(record[record.size()-1]*2);
            }
            else record.push_back(stoi(operations[i]));
        }
        int sum = 0;
        for (int i = 0; i < record.size(); i++) {
            sum = sum + record[i];
        }
        return sum;
    }
};