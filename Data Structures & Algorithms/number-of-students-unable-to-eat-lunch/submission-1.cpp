class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        // stopping condition: 0 student that want sandwiches[0]
        int love0 = 0;
        int love1 = 0;
        for (int i = 0; i < students.size(); i++) {
            students[i] == 0 ? love0 += 1 : love1 += 1;
        }
        
        while (!sandwiches.empty() && ((love0 > 0 && sandwiches[0] == 0) ||
               (love1 > 0 && sandwiches[0] == 1))) 
        {

            if (students[0] == sandwiches[0]) {
                sandwiches[0] == 0 ? love0 -= 1 : love1 -= 1;
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());

            }
            else {
                int val = students[0];
                students.push_back(val);
                students.erase(students.begin());
            }
        }
        return students.size();
    }
};