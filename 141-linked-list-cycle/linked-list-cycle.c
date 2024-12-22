/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 typedef struct ListNode ListN;

bool hasCycle(struct ListNode *head) {
    if (head == NULL){
        return false;
        }
    if (head -> next == NULL){
        return false;
        }


    ListN * tempFast = head;
    ListN * tempSlow = head;

    while(tempFast != NULL && tempSlow != NULL){
        tempFast = tempFast -> next;
        if (tempFast != NULL){
        tempSlow = tempSlow -> next;
        tempFast = tempFast -> next;
        }
        if (tempFast == tempSlow){return true;}
    }
    return false;
};