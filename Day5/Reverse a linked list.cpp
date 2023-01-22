Node* reverseList(Node *head){
    if(head == NULL || head -> next = NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr -> next;
        curr-> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev; 
}

void reverse(Node* &head, Node* curr, Node* prev){
    if(curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

ListNode* middleNode(Node* head){
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next){
        slow = slow-> next;
        fast = fast -> next -> next;
    }
    return slow;
}