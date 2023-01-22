ListNode* removeNthFromEnd(ListNode* head, int n){
    ListNode *start = new ListNode();
    start -> next = head;
    listNode* fast = start;
    listNode* slow = start;
    for(int i = 0; i< n; i++){
        fast = fast->next;
    }
    while(fast-> next != NULL){
        fast = fast->next;
        slow = slow->next;
    }
    return start->next;

}