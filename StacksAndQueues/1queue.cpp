// follows fifo mechanism, it is a container which stores elements
// in a linear fashion, the first element added is the first one to be removed          
// has 4 operations
// push - to add an element
// pop - to remove an element (from first)
// front - to get the front element (wont delete it,just returns it)    
// back - to get the back element (wont delete it,just returns it)
// isEmpty - to check if the queue is empty

// now let us implement queue using array

#include <iostream>
using namespace std;

class MyQueue {
private:
    int front, rear;
    int size;
    int* arr;

public:
    MyQueue(int capacity) {
        size = capacity;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    // Push operation
    void push(int x) {
        if (rear == size) {
            cout << "Queue is full\n";
            return;
        }
        arr[rear++] = x;
    }

    // Pop operation
    int pop() {
        if (front == rear) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front++];
    }

    // Display queue contents
    void display() {
        if (front == rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue: ";
        for (int i = front; i < rear; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    ~MyQueue() {
        delete[] arr;
    }
};

int main() {
    MyQueue q(10);  // Queue with capacity 10

    q.push(1);
    q.push(2);
    q.push(3);
    q.display();

    cout << "Popped: " << q.pop() << "\n";
    q.display();

    q.push(4);
    q.push(5);
    q.display();
    cin.get();
    return 0;
}
