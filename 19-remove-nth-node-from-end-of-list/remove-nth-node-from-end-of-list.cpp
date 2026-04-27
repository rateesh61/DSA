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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        int k=0;
        ListNode* temp=head;
        while(temp){
            k++;
            temp=temp->next;
        }
        if(n > k) return head;
        int cnt=k-n;
        temp=head;
        if(cnt==0) return head->next;

        while(cnt>1){
            temp=temp->next;
            cnt--;
        }
        
        temp->next=temp->next->next;
        return head;
    }
};