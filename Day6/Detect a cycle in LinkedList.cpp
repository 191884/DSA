#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
};

void insertNode(Node* &head,int val) {
    Node* newNode = new Node(val);
    
    if(head == NULL) {
        head = newNode;
        return;
    }
    
    Node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}

void createCycle(Node* &head,int a,int b) {
    int cnta = 0,cntb = 0;
    Node* p1 = head;
    Node* p2 = head;
    while(cnta != a || cntb != b) {
        if(cnta != a) p1 = p1->next, ++cnta;
        if(cntb != b) p2 = p2->next, ++cntb;
    }
    p2->next = p1;
}

bool cycleDetect(Node* head) {
    unordered_set<Node*> hashTable;
    while(head != NULL) {
        if(hashTable.find(head) != hashTable.end()) return true;
        hashTable.insert(head);
        head = head->next;
    }
    return false;
}

int main() {
    Node* head = NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    createCycle(head,1,3);
    if(cycleDetect(head) == true)
    cout<<"Cycle detected\n";
    else
    cout<<"Cycle not detected\n";
    return 0;
}