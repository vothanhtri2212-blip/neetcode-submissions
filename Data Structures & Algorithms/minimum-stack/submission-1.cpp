class MinStack {
public:
    vector<int> mainStack;
    vector<int> minStack;

    MinStack() {
    }
    
    void push(int val) {
        mainStack.push_back(val);
        if (minStack.empty()) minStack.push_back(val);
        else if (val <= minStack.back()) minStack.push_back(val);

    }
    
    void pop() {
        if (mainStack.back() == minStack.back()) {
            minStack.pop_back();
        }
        mainStack.pop_back();

    }
    
    int top() {
        return mainStack.back();
    }
    
    int getMin() {
        return minStack.back();
    }
};
