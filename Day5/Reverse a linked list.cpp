#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void InsertionAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void printLL(Node* &head){
    Node* temp = head;
    while (temp != NULL) {
        cout<<temp -> data<<endl;
        temp = temp -> next;
    }
    
}

// Node* reverseLL(Node* &head){
//     Node* back = NULL;
//     Node* front = head;
//     while (head != NULL){
//         front = head -> next;
//         head -> next = back;
//         back = head;
//         head = front;
//     }
//     head = back;
//     return head;
// }

Node* reverseLL(Node* &head){
    if(head == NULL ||head -> next == NULL){
        return head;
    }
    Node* temp = reverseLL(head-> next);
    head -> next -> next = head;
    head -> next = NULL;
    return temp;
}

int main(){
    
    Node* node1 = new Node(10);
    Node* tail = node1;

    InsertionAtTail(tail, 12);
    InsertionAtTail(tail, 15);
    InsertionAtTail(tail, 24);
    InsertionAtTail(tail, 35);

    node1 = reverseLL(node1);
    printLL(node1);
    
    return 0;
}