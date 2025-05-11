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
Node* deltailofll(Node* head){
    if(head==nullptr) return head;
    if(head->next == nullptr){
        return head;
    }
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
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
Node* kthelement(Node*head,int k){
    if (head == nullptr) return head;
    if(k==1){
        Node * temp =head;
        head=head->next;
        delete temp;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev = nullptr;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
  return head;

}
Node* remelement(Node*head,int k){
    if (head == nullptr) return head;
    if(k==1){
        Node * temp =head;
        head=head->next;
        delete temp;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev = nullptr;
    while(temp!=nullptr){
        cnt++;
        if(temp->data==k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
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
    // head = deltailofll(head);
    head = kthelement(head, 5); // Deleting the 2nd element
    printLL(head);  // To verify result
    cin.get();
    return 0;

}
