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

void Solve(Node* &head, int n){
    Node* slow = head;
    Node* fast = head;
    for(int i = 0; i< n; ++i){
        fast = fast -> next;
    }
    while(fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next;
    }
    slow ->next = slow -> next -> next;
}

int main(){
    
    Node* node1 = new Node(10);
    Node* tail = node1;

    InsertionAtTail(tail, 12);
    InsertionAtTail(tail, 15);
    InsertionAtTail(tail, 24);
    InsertionAtTail(tail, 35);

    Solve(node1, 3);

    printLL(node1);    
        
    return 0;
}