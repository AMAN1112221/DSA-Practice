/* Problem : You are given a node del_node of a Singly Linked List where you have to delete this given node from the linked list but you are not given the head of the list.
  plateform :GFG
  difficulty:Medium
  Approach : 
  Just storing the address of node next to the node which we have to delete now copying the data and next to curr and deleting the temp node .
  Time Complexity :O(1)
  Space Complexity :O(1)
  */
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

class Solution {
  public:
    void deleteNode(Node* curr) {
        Node *temp=curr->next;
        curr->data=temp->data;
        curr->next=temp->next;
        delete temp;
        
    }
};
