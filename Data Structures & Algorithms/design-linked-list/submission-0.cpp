class MyLinkedList {
public:
    struct Node  {
        int val;
        Node* next;
    };
    Node* head = nullptr;
    int size = 0;
    MyLinkedList() {
    }
    
    int get(int index) {
        Node* cur = head;
        if (!cur) return 0;
        if (index < size && index > 0) {
        for (int i = 0; i < index; i++) {
            cur = cur->next;
        }
        return cur->val;
        }
        else return -1;
    }
    
    void addAtHead(int val) {
        size += 1;
        Node* newNode = new Node;
        newNode->val = val;

        if (head != nullptr) {
            newNode->next = head;
            head = newNode;
        }
        else {
            head = newNode;
            newNode->next = nullptr; 
        }
    }
    
    void addAtTail(int val) {
        if (head == nullptr) addAtHead(val);
        else {
        size += 1;
        Node* newNode = new Node;
        newNode->val = val;
        newNode->next = nullptr;

        Node* cur = head;
        while (cur->next != nullptr) {
            cur = cur->next;
        }
        cur->next = newNode;
        }
    }
    
    void addAtIndex(int index, int val) {
        if (index == size) addAtTail(val);
        else if (index == 0) addAtHead(val);
        else if (index < size) {
        size = size + 1;
        Node* newNode = new Node;
        newNode->val = val;        

        Node* cur = head;

        for (int i = 0; i < index - 1; i++) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        }
    }
    
    void deleteAtIndex(int index) {
        if (index < size) {
        size = size - 1;
        if (index == 0) {
            head = head->next;
        }
        else {
        Node* cur = head;
        for (int i = 0; i < index - 1; i++) {
            if (cur->next == nullptr) break;
            cur = cur->next;
        }
        cur->next = cur->next->next;
        }
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */