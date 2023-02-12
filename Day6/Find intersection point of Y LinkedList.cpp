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

Node* intersectionPresent(Node* &head1, Node* &head2){
    unordered_set<int> st;
    while(head1 != NULL){
        st.insert(head1 -> data);
        head1 = head1 -> next;
    }

    while(head2 != NULL){
        if(st.find(head2 ->data) != st.end()){
            return head2;
        }
        head2 = head2 -> next;
    }
    return NULL;
}

void printLL(Node* &head){
    Node* temp = head;
    while (temp != NULL) {
        cout<<temp -> data<<endl;
        temp = temp -> next;
    }
    
}

int main(){
    
    Node* node1 = new Node(10);
    Node* tail1 = node1;
    Node* node2 = new Node(11);
    Node* tail2 = node2;


    InsertionAtTail(tail1, 12);
    InsertionAtTail(tail2, 15);
    InsertionAtTail(tail1, 9);
    InsertionAtTail(tail2, 9);


    Node* ans = intersectionPresent(node1, node2);
    if(ans != NULL) cout<<"The intersection point is "<< ans -> data;
    else cout<<"No intersection point";
    // printLL(node1);
    
    return 0;
}