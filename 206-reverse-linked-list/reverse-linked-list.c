/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 typedef struct ListNode Lnode;

struct ListNode* reverseList(struct ListNode* head) {
    Lnode *nextNode, *preNode = NULL;
    while(head){
        nextNode = head -> next;
        head -> next = preNode;
        preNode = head;
        head = nextNode;
    }
    return preNode;
}