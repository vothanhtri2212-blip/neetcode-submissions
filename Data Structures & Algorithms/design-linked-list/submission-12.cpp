class MyLinkedList {
    struct Node {
        int val;
        Node* next;
        Node* prev;
        Node(int v = 0) : val(v), prev(nullptr), next(nullptr) {}
    };
    
    int size = 0;
    Node head, tail;

public:

    MyLinkedList() {
        head.next = &tail;
        tail.prev = &head;
    }
    
    int get(int index) {
        if (index >= size) {
            return -1;
        }
        else {
            Node* cur = &head;
            for (int i = 0; i < index + 1; i++) {
                cur = cur->next;
            } 
            return cur->val;
        }    
    }
    
    void addAtHead(int val) {
        addAtIndex(0, val);
    }
    
    void addAtTail(int val) {
        addAtIndex(size, val);
    }
    
    void addAtIndex(int index, int val) {
        if (index > size) {
            return;
        }
        else {
            Node* cur = &head;
            size += 1;
            for (int i = 0; i < index; i++) {
                cur = cur->next;
            }
            Node* newNode = new Node;
            newNode->val = val;
            newNode->prev = cur;
            newNode->next = cur->next;
            cur->next = newNode;
            cur = cur->next;
            cur = cur->next;
            cur->prev = newNode;
        }
    }
    
    void deleteAtIndex(int index) {
        if (index >= size) {
            return;
        }
        else {
            Node* cur = &head;
            size -= 1;
            for (int i = 0; i < index; i++) {
                cur = cur->next;
            }
            cur->next = cur->next->next;
            cur->next->prev = cur;
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