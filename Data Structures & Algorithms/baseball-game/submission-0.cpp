class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record; // Store scores as integers
        
        for (int i = 0; i < operations.size(); i++) {
            string op = operations[i];
            
            if (op == "+") {
                // Add the last two scores on the record
                int lastScore = record.back();
                int secondToLastScore = record[record.size() - 2];
                record.push_back(lastScore + secondToLastScore);
            } 
            else if (op == "D") {
                // Double the last score on the record
                record.push_back(record.back() * 2);
            } 
            else if (op == "C") {
                // Invalidate/remove the last score
                record.pop_back();
            } 
            else {
                // It's a number, convert to int and push to record
                record.push_back(stoi(op));
            }
        }
        
        // Calculate the total sum of the record
        int totalSum = 0;
        for (int i = 0; i < record.size(); i++) {
            totalSum += record[i];
        }
        
        return totalSum;
    }
};