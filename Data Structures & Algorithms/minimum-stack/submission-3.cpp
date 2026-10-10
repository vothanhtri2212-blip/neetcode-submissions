class MinStack {
public:
    vector<int> mainStack;
    vector<int> minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        int min;
        if (mainStack.empty()) min = val;
        else if (val < minStack.back()) min = val;
        else min = minStack.back();
        mainStack.push_back(val);
        minStack.push_back(min);
    }
    
    void pop() {
        mainStack.pop_back();
        minStack.pop_back();
    }
    
    int top() {
        return mainStack.back();
    }
    
    int getMin() {
        return minStack.back();
    }
};
