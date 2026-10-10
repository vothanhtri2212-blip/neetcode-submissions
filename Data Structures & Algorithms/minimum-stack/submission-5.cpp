class MinStack {
public:
    vector<int> mainStack;
    vector<int> minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        mainStack.push_back(val);
        minStack.push_back(minStack.empty() ? val : min(val, minStack.back()));
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
