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

bool isPalindrome(Node* &head){
    if(head == NULL || head -> next == NULL) return true;
    Node* slow = head;
    Node* fast = head;
    while(fast -> next != NULL && fast -> next -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    slow->next = reverseLL(slow->next);
    slow = slow->next;
    Node* dummy = head;
        
    while(slow!=NULL) {
        if(dummy -> data != slow -> data) return false;
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
}

int main(){
    
    Node* node1 = new Node(10);
    Node* tail = node1;

    InsertionAtTail(tail, 12);
    InsertionAtTail(tail, 15);
    InsertionAtTail(tail, 12);
    InsertionAtTail(tail, 10);

    if(isPalindrome(node1)) cout<<"LL is palindrome.";
    else cout<<"LL is not palindrome.";   

    return 0;
}