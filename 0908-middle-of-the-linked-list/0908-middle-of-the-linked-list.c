/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* slow=head;
    struct ListNode* fast=head;
    while(slow && fast && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    /*while(slow)
    {
        printf("%d",slow->val);
        slow=slow->next;
    }*/
    head=slow;
    return head;
}