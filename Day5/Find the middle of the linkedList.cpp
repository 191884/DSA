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

Node* middleElement(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while(fast && fast -> next){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

int main(){
    
    Node* node1 = new Node(10);
    Node* tail = node1;

    InsertionAtTail(tail, 12);
    InsertionAtTail(tail, 15);
    InsertionAtTail(tail, 24);
    InsertionAtTail(tail, 35);

    Node* midElement = middleElement(node1);
    cout<<"The middle element is "<<midElement -> data;
    
    return 0;
}