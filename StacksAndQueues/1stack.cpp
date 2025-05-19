// stack follows lifo mechanism, it is a container which stores elements
// in a linear fashion, the last element added is the first one to be removed
// it has 4 operations
// 1. push - to add an element
// 2. pop - to remove an element (from last)
// 3. top - to get the top element (wont delete it,just returns it)
// 4. isEmpty - to check if the stack is empty
#include <iostream>

using namespace std;

class MyStack {
private:
    int arr[1000];
    int top;

public:
    MyStack() {
        top = -1;
    }

    void push(int x) {
        if (top >= 999) return; // overflow check
        top++;
        arr[top] = x;
    }

    int pop() {
        if (top == -1) return -1; // underflow check
        int val = arr[top];
        top--;
        return val;
    }
};

int main() {
    MyStack st;

    // Push some elements
    st.push(10);
    st.push(20);
    st.push(30);

    // Pop and print
    cout << st.pop() << endl;  // 30
    cout << st.pop() << endl;  // 20
    cout << st.pop() << endl;  // 10
    cout << st.pop() << endl;  // -1 (stack is empty)
    cin.get();
    return 0;
}
