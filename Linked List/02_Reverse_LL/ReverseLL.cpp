/*   206. Reverse Linked List  

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 // Method-1 (For more referenece refer to notes)

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //ans vector
        vector<int>ans;
        //temp ptr
        ListNode *temp = head;
        //LL traverse
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int i= ans.size()-1;
        temp=head;
        //copy from array to LL
        while(temp){
            temp->val=ans[i];
            i--;
            temp=temp->next;
        }
        return head;
        
    }
};

*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr= head, *prev=NULL, *fut=NULL;
        while(curr)
        {
            fut=curr->next;
            curr->next = prev;
            prev= curr;
            curr= fut;
        };

        head=prev;
        return head;
        
    }
};