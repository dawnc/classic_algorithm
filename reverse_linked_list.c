//iteration
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *last = NULL, *node = head, *tmp;
    
    while(node){
            tmp = node -> next;
            node -> next = last;
            last = node;
            node = tmp;
    }
    
    return last;
}


//recursive
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *ret;
    if(head == NULL || head -> next == NULL)
        return head;
    ret = reverseList(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return ret;
}

