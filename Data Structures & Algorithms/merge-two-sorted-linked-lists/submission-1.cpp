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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 || !list2) return list1 ? list1 : list2;
        
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        ListNode* newHead;
        if(head1->val<head2->val){
            newHead=head1;
            head1=head1->next;
        }else{
            newHead=head2;
            head2=head2->next;
        }
        ListNode* curr=newHead;

        while (head1 && head2) {
            if (head1->val < head2->val) {
                curr->next = head1;
                curr = curr->next;
                head1 = head1->next;
            } else {
                curr->next = head2;
                curr = curr->next;
                head2 = head2->next;
            }
        }
        while (head1) {
            curr->next = head1;
            curr = curr->next;
            head1 = head1->next;
        }

        while (head2) {
            curr->next = head2;
            curr = curr->next;
            head2 = head2->next;
        }
        return newHead;
    }
};
