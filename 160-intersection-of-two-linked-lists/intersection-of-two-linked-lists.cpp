/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     ListNode* temp=headA;
     int nc1=0,nc2=0;
     while(temp){
        temp=temp->next;
        nc1++;
     }   
     temp=headB;
     while(temp){
        temp=temp->next;
        nc2++;
     }   
     int k=nc2-nc1;
       ListNode* temp1=headA;
     ListNode* temp2=headB;
     if(k<0){
        int absk=abs(k);
        temp1=headA;
        temp2=headB;
        while(absk>0){
            temp1=temp1->next;
            absk--;
        }
     }
     else{
         int absk=abs(k);
        
        temp1=headA;
        temp2=headB;
        while(absk>0){
            temp2=temp2->next;
            absk--;
        }
     }

   

     while(temp1!=NULL && temp2!=NULL){
        if(temp1==temp2) return temp1;
        temp1=temp1->next;
        temp2=temp2->next;
     }

     return NULL;

   }
};