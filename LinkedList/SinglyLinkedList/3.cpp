#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class Node{
    public:
    int data;
    Node* next;
    
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data =data1;
        next=nullptr;
    }
};
Node* convertArr2LL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i =1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* inserthead(Node* head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    return newNode;
}
Node* inserttail(Node* head, int data){
    if(head == nullptr){
        return new Node(data);}
    Node* temp=head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newNode = new Node(data);
    temp->next = newNode;
    return head;
    }
    
Node* insertkthpos(Node* head, int data, int k) {
    // ✅ Handle inserting at the head (k == 1)
    if (k == 1) {
        Node* newNode = new Node(data);
        newNode->next = head;
        return newNode;
    }

    int cnt = 1; // ✅ Changed from 0 to 1 since we're using 1-based index
    Node* temp = head;

    // ✅ Removed the incorrect `else { return head; }` block
    while (temp != nullptr) {
        if (cnt == k - 1) {
            Node* newNode = new Node(data, temp->next); // ✅ Used constructor with next
            // ❌ Removed redundant line: newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
        cnt++;
    }
    return head;
}

void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);
    cout << "Original Linked List: ";
    printLL(head); 
    head=inserthead(head, 1);
    printLL(head); 
    head=inserttail(head, 100);
    printLL(head); 
    head=insertkthpos(head, 50, 3);
    printLL(head);
    cin.get();
    return 0;

}