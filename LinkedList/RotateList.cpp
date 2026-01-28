/* Problem : Given the head of a linked list, rotate the list to the right by k places.
  plateform :Leetcode
  difficulty:Medium
  Approach : 
  Going from back and breaking the list from k last and joining it to the head 
  Time Complexity :O(n)
  Space Complexity :O(1)
  */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int count=0;
        ListNode *temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
         if(k==0 || count==0)
        return head;
        k=k%count;
       
        count=count-k;
        ListNode *curr=head;
        ListNode *prev=NULL;
        
        while(count !=0)
        {
            prev=curr;
            curr=curr->next;
            count--;
        }
        prev->next=NULL;
        ListNode *tail;
        tail=curr;
       while(tail->next !=NULL)
        {
            tail=tail->next;
        }
        tail->next=head;
        head=curr;
        return head;
        
    }
};
