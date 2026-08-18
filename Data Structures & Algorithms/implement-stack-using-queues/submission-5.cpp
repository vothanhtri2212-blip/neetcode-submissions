class MyStack {
public:
    MyStack() {
        
    }
    queue<int> myQueue;

    void push(int x) {
        myQueue.push(x);
    }
    
    int pop() {
        int size = myQueue.size();
        for (int i = 0; i < size - 1; i++) {
            int val = myQueue.front();
            myQueue.pop();
            myQueue.push(val);
        }
        int res = myQueue.front();
        myQueue.pop();
        return res;
    }
    
    int top() {
        int size = myQueue.size();
        for (int i = 0; i < size - 1; i++) {
            int val = myQueue.front();
            myQueue.pop();
            myQueue.push(val);
        }
        int res = myQueue.front();
        myQueue.push(res);
        myQueue.pop();
        return res;        
    }
    
    bool empty() {
        return myQueue.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */