#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(){
        this -> data = 0;
        this -> next = NULL;
    }

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

void solve(Node* &l1, Node* &l2, Node* &ans){
    int sum = 0, carry = 1;
    while(l1 != NULL || l2 != NULL || carry){
        sum = 0;
        if(l1 != NULL){
            sum += l1 -> data;
            l1 = l1 -> next;
        }
        if(l2 != NULL){
            sum += l2 -> data;
            l2 = l2 -> next;
        }
        sum += carry;
        carry = sum/10;
        InsertionAtTail(ans, sum%10);
    }
}

int main(){
    
    Node* l1 = new Node(9);
    Node* tail1 = l1;
    Node* l2 = new Node(9);
    Node* tail2 = l2;
    Node* ans = new Node();
    Node* tail = ans;

    InsertionAtTail(tail1, 9);
    InsertionAtTail(tail1, 9);
    InsertionAtTail(tail1, 9);
    InsertionAtTail(tail1, 9);
    InsertionAtTail(tail1, 9);
    InsertionAtTail(tail1, 9);

    InsertionAtTail(tail2, 9);
    InsertionAtTail(tail2, 9);
    InsertionAtTail(tail2, 9);

    solve(l1, l2, ans);

    printLL(tail -> next);
    
    return 0;
}