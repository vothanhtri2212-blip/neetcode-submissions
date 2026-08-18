class MyStack {
public:
    MyStack() {
        
    }
    queue<int> myQueue;

    void push(int x) {
        myQueue.push(x);
    }
    
    int pop() {
        queue<int> myQueue2;
        int size = myQueue.size();
        for (int i = 0; i < size; i++) {
            if (i == size - 1) {
                break;
            }
            myQueue2.push(myQueue.front());
            myQueue.pop();
        }
        int res = myQueue.front();
        myQueue = myQueue2;
        return res;
    }
    
    int top() {
        queue<int> myQueue2;
        int size = myQueue.size();
        for (int i = 0; i < size; i++) {
            if (i == size - 1) {
                myQueue2.push(myQueue.front());
                break;
            }
            myQueue2.push(myQueue.front());
            myQueue.pop();
        }
        int res = myQueue.front();
        myQueue = myQueue2;
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