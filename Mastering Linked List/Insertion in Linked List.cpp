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

int main(){
    
    Node* node1 = new Node(10);

    InsertionAtHead(node1, 12);
    
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;
    return 0;
}