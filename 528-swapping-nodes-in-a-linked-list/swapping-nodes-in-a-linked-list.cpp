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
    ListNode* swapNodes(ListNode* head, int k) {
        
        int val1;
        ListNode *first;
        int val2;
        ListNode *Second;
        int count=0;
        ListNode *temp=head;
        while(temp!=nullptr)
        {   
            count++;
            if(count==k)
            {
                val1=temp->val;
                first=temp;
            }
            temp=temp->next;
        }
        count=count-k;
        temp=head;
        while(count)
        {
            temp=temp->next;
            count--;
        }
        Second=temp;
        val2=temp->val;

        first->val=val2;
        Second->val=val1;

        return head;


    }
};