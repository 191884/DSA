#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data ;
    Node* next;
    
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Node with Value "<<value<<" is freed."<<endl;
    }
};

void insertAtTail(Node* &tail, int d){
    Node* nodeToInsert = new Node(d);
    tail -> next = nodeToInsert;
    tail = nodeToInsert;
}

void deleteNode(Node* &head, int numToDel){
    Node *curr = head;
    Node* prev = NULL;

    if(numToDel == head ->data){
        Node* element = head;
        head = head -> next;
        element -> next = NULL;
        delete element;
        return;
    }

    while (curr != NULL){
        if(curr -> data == numToDel){
            break;
        }
        prev = curr;
        curr = curr -> next;
    }
    if(curr == NULL){
        cout<<numToDel<<" isn't present in this this Linked List.";
        return;
    }else{ 
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

void printLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(5);
    Node* tail = head;
    insertAtTail(tail, 7);
    insertAtTail(tail, 9);
    insertAtTail(tail, 10);

    deleteNode(head, 7);

    printLL(head);

}