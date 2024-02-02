/*19. Remove Nth Node From End of List

Given the head of a linked list, remove the nth node from the end of the list and return its head.


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]

*/

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
            //step-1 completed , total nodes counted
        ListNode *temp= head;
        int count= 0;
        while(temp){
            count++;
            temp=temp->next;
        };
    
        //update count
        count-=n;
        if(count==0) //Edge_Case=> when we need to delete first node
        {
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        //we have to reach this node from start
        ListNode *curr=head;
        ListNode *prev= NULL;
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;

        return head;
    }
};