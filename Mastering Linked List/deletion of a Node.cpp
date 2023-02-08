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
        head = head -> next;
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
    }else prev -> next = curr -> next;
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

    deleteNode(head, 9);

    printLL(head);

}