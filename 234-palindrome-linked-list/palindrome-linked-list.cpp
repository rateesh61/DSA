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
    bool isPalindrome(ListNode* head) {
        if(head==NULL||  head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=NULL) slow=slow->next;
        ListNode* head2= reverse(slow);
        ListNode* temp1=head;
        ListNode* temp2=head2;
        while(temp2!=NULL){
            if(temp1->val!=temp2->val)
            return false;

            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }

    ListNode* reverse(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* temp=head;

        while(temp!=NULL){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;

    }
};