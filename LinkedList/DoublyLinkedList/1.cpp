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