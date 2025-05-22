#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Queue class
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    // Enqueue: Add an element at the end
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << val << " enqueued.\n";
    }

    // Dequeue: Remove an element from the front
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty.\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr)
            rear = nullptr;
        cout << temp->data << " dequeued.\n";
        delete temp;
    }

    // Display the queue
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty.\n";
            return;
        }
        Node* temp = front;
        cout << "Queue: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == nullptr;
    }
};

// Main function
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();
    cin.get();
    return 0;
}
