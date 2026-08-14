class BrowserHistory {
public:
    struct browser {
        browser* next;
        browser* prev;
        string name;
    };
    
    browser* first = new browser;
    browser* last = first;

    BrowserHistory(string homepage) {
        first->name = homepage;
        first->next = nullptr;
        first->prev = nullptr;            
    }
    
    void visit(string url) {
        browser* newBrowser = new browser;
        newBrowser->name = url;
        newBrowser->prev = last;
        newBrowser->next = nullptr;
        last->next =  newBrowser;
        last = newBrowser;
    }
    
    string back(int steps) {
        for (int i = 0; i < steps; i++) {
            if (!last->prev) return last->name; 
            last = last->prev;
        }
        return last->name;
    }
    
    string forward(int steps) {
        for (int i = 0; i < steps; i++) {
            if (!last->next) return last->name; 
            last = last->next;
        }
        return last->name;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */