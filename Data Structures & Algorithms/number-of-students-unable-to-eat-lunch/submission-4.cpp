class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int love0 = 0;
        int love1 = 0;
        for (int i = 0; i < students.size(); i++) {
            students[i] == 0 ? love0 += 1 : love1 += 1;
        }        
        for (int i = 0; i < sandwiches.size();) {
            if (sandwiches[i] == 0 && love0 > 0) {
                i++;
                love0 -= 1;
            }
            else if (sandwiches[i] == 1 && love1 > 0) {
                i++;
                love1 -= 1;
            }
            else break;
        }
        return love0 + love1;
    }
};