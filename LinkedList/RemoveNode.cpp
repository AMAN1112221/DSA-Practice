/* Problem : Remove Nth Node From End of List.
  plateform :Leetcode
  difficulty:Medium
  Approach : 
  Going from back and deleting that node by taking curr and prev pointer. 
  Time Complexity :O(n)
  Space Complexity :O(1)
  */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode *temp=head;
        while(temp !=NULL)
        {
            count++;
            temp=temp->next;
        }
        count=count-n;
        if(count==0)
        {
            temp=head;
            head=temp->next;
            delete temp;
            return head;
        }
        ListNode *curr=head,*prev=NULL;
        while(count)
        {
            prev=curr;
            curr=curr->next;
            count--;
        }
        
        prev->next=curr->next;

        delete curr;

        return head;

        
    }
};
