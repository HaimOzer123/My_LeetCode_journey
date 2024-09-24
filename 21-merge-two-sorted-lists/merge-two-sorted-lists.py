# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: ListNode, list2: ListNode) -> ListNode:
        # Base cases: if one list is empty, return the other
        if not list1:
            return list2
        if not list2:
            return list1
        
        # Recursive case: compare the heads of list1 and list2
        if list1.val < list2.val:
            list1.next = self.mergeTwoLists(list1.next, list2)  # list1 is smaller
            return list1
        else:
            list2.next = self.mergeTwoLists(list1, list2.next)  # list2 is smaller
            return list2