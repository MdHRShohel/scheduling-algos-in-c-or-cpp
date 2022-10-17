// Reverse Linked List
 /**
 Given the head of a singly linked list, reverse the list, and return the reversed list.
  */

 class Solution {
 public:
     ListNode* reverseList(ListNode* head) {
         ListNode* cur = NULL;
         while (head) {
             ListNode* next = head -> next;
             head -> next = cur;
             cur = head;
             head = next;
         }
         return cur;
     }
 };
