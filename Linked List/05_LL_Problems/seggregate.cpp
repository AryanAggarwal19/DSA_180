//Given a linked list of 0s, 1s and 2s, sort it. Given a linked list of N nodes where nodes can contain values 0s,
// 1s, and2s only.The task is to segregate 0s, 1s, and2s linked list such that all zeros segregate to head side, 2s at the end of the linked list, and1s in the mid of 0s and 2s.

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
       
        int Count0=0,Count1=0,Count2= 0;
        
        Node *temp= head;
        while(temp)
        {
            if(temp->data==0)
            {
                Count0++;
            }
            else if(temp->data==1)
            {
                Count1++;
            }
            else
            {
                Count2++;
            }
            temp= temp->next;
        }
        //at the end of this loop we have the count of 0s,1s and 2s
        
        temp= head;
        while(temp)
        {
            while(Count0--)
            {
                temp->data=0;
                temp= temp->next;
            }
            while(Count1--)
            {
                temp->data=1;
                temp= temp->next;
            }
            while(Count2--)
            {
                temp->data=2;
                temp=temp->next;
            }
        }
        
        return head;
        
        
        
    }
};
