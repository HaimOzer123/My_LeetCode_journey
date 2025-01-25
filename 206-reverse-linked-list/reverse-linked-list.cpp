/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

      if(head ==NULL or head ->next ==NULL){
        return head;
      }

        ListNode* p=NULL;
        ListNode* c=head;
        ListNode* a=c->next;
        while(c!=NULL){
          c->next = p;
          p=c;
          c=a;
          if(c!= NULL){
          a=c->next;
          }

        }
     return p;
    }
};