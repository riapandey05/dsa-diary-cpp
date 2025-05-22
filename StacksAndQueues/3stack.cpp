// implement a stack using a queue
#include <iostream>
#include <queue>
using namespace std;

class Stack {
private:
    queue<int> q;

public:
    void push(int x) {
        q.push(x);
        int size = q.size();
        for (int i = 1; i < size; ++i) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if (q.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        q.pop();
    }

    int top() {
        if (q.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Stack after pushing elements: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    cin.get();
    return 0;
}
