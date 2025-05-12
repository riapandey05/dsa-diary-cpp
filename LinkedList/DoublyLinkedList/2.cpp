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
Node* delheadDLL(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}
Node* deltailDLL(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* prev = head;
    while(prev->next->next!=NULL){
        prev = prev->next;
    }
    Node* tail = prev->next;
    prev->next = nullptr;
    delete tail;
    return head;
}
Node* delkthelement(Node*head, int k){
    if(head==NULL){
        return NULL;
    }
    int cnt=0;
    Node* kNode =head;
    while(kNode!=NULL ){
        cnt++;
        if(cnt==k) break;     
    }
    Node* prev = kNode->back;
    Node* front = kNode->next;

    if(prev == NULL && front == NULL){
        return NULL;
    }
    else if(prev==NULL){
        return delheadDLL(head);
    }
    else if(front==NULL){
        return deltailDLL(head);
    }
    else{
      prev->next=front;
      front->back=prev;
      kNode->next=NULL;
      kNode->back=NULL;
      delete kNode;
      return head;  
    }

}
void deleteNode(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front==NULL && prev==NULL){
        return;
    }
    else if(prev==NULL){
        front->back = NULL;
        delete temp;
    }
    else if(front==NULL){
        prev->next = NULL;
        delete temp;
    }
    else{
        prev->next = front;
        front->back = prev;
        delete temp;
    }
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
    cout<<endl;
    // head= delheadDLL(head);
    // print(head);
    // cout<<endl;
    // head= deltailDLL(head);
    // print(head);
    // cout<<endl;
    // head=delkthelement(head,2);
    // print(head);
    cin.get();
    return 0;
}