// insertion in a doubly linked list
// in doubly linked list, each node contains a pointer to the next node and a pointer to the previous node
// hence we can go in both directions
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class Node{
    public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node* next1, Node* back1){
        data= data1;
        next = next1;
        back = back1;
    }
    Node(int data1){
        data= data1;
        next= nullptr;
        back= nullptr;
    }

};
Node* convertArr2DLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
Node* insertb4head(Node* head, int data){
    Node* newHead = new Node(data,head,nullptr);
    head->back= newHead;
    return newHead;
}
Node* insertb4tail(Node* head, int data){
    if(head->next ==NULL){
        return insertb4head(head,data);
    }
    Node* tail = head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* prev = tail->back;
    Node* newTail = new Node(data,nullptr,tail);
    prev->next = newTail;
    tail->back = newTail;
    return head;
}
Node* insertkthpos(Node*head, int data, int k){
    if(k==1){
        return insertb4head(head,data);
    }
    Node* temp = head;
    int cnt = 0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(data,temp,prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}


void print (Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    vector<int>arr={2,5,8,7};
    Node* head= convertArr2DLL(arr);
    print(head);
    cin.get();
    return 0;
}