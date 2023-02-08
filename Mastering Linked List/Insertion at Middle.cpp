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

void InsertionAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}


void InsertionAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void InsertionAtMiddle(Node* &head, Node* &tail, int position, int d){
    if(position == 1){
        InsertionAtHead(head, d);
        return;
    }

    Node* temp = head;

    for(int i = 1; i< position-1; i++){
        temp = temp -> next;
        if(temp == NULL){
            cout<<"The Linked List only have "<<i<<" elements."<<endl;
            return;
        }
    }

    if(temp -> next == NULL){
        InsertionAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void printLL(Node* &head){
    Node* temp = head;
    while (temp != NULL) {
        cout<<temp -> data<<endl;
        temp = temp -> next;
    }
    
}

int main(){
    
    Node* head = new Node(10);
    Node* tail = head;


    InsertionAtTail(tail, 12);
    InsertionAtTail(tail, 15);
    InsertionAtTail(tail, 24);
    InsertionAtTail(tail, 32);

    InsertionAtMiddle(head, tail, 1, 5);
    InsertionAtMiddle(head, tail, 3, 11);

    InsertionAtMiddle(head, tail, 8, 50);

    printLL(head);

    cout<<endl<<head->data<<endl<<tail->data;
    
    return 0;
}