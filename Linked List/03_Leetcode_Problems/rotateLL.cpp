/*61. Rotate List
Given the head of a linked list, rotate the list to the right by k places.

Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]*/

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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head==NULL || head->next==NULL)
        return head;
       //Count no of nodes
        ListNode *temp= head;
        int count= 0;

        while(temp){
            count++;
            temp= temp->next;
        };
//UpdateCount
         k= k%count;
         if(k==0)
         return head;

        count -= k;
        ListNode *curr= head, *prev= NULL;
        while(count--)
        {
            prev= curr;
            curr=curr->next;
        }
        //divide the LL
        prev->next= NULL;
        ListNode *Tail= curr;
        //Second list ke last node pr leke jao
        while(Tail->next!=NULL)
        {
         Tail= Tail->next;   
        }
        Tail->next= head;

        head= curr;
        return head;
        
    }
};

