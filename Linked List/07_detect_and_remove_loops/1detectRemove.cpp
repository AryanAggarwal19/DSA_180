/**********************************Remove loop in Linked List*********************************/

/*Given a linked list of N nodes such that it may contain a loop.

A loop here means that the last node of the link list is connected to the node at position X(1-based index). If the link list does not have any loop, X=0.

Remove the loop from the linked list, if it is present, i.e. unlink the last node which is forming the loop.*/


//Approach1

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        //1 detect if loop exist or not
        //for this we will use slow and fast pointer approach
        
        Node *slow= head;
        Node *fast= head;
        
        while(fast!= NULL && fast->next!=NULL)
        {
            slow= slow->next;
            fast= fast->next->next;
            
            if(slow==fast)
            break;
        }
        
        //now loop can be broken in 2 ways 
        
        if(fast==NULL|| fast->next==NULL)
        {
            //this simply implies singular LL
            return;
        }
        
        else //this implies loop does exit and now the only task left is to find the last node
        {
            //step-2 reposition slow to head and move both slow and fast pointers one step at atime
            
            slow= head;
            
            //dono ko meet krwao
            while(slow!=fast)
            {
                slow= slow->next;
                fast= fast->next;
            };
    
    //now when slow=fast this implies the starting of loop
    //now to reach to the last node make fast stationary and keep moving slow one step
    
          while(slow->next!=fast)
          {
              slow=slow->next;
          }
          
          slow->next =NULL;
      
        }   
        
    }
};

/**********************************************************************************************/

//Approach2 => Count_based_approach


class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        
        
        //1 detect if the loop exist
        
        Node *slow= head, *fast= head;
        
        while(fast&&fast->next)
        {
            slow= slow->next;
            fast= fast->next->next;
            
            if(slow==fast)
            break;
        }
        
        // singular LL
        if(fast==NULL || fast->next==NULL )
        return;
        
        //otherwise loop exists
        //and the next step is to calc the length of the loop
        
        else
        {
            slow= fast->next;
            int count=1;
            
            while(slow!=fast)
            {
                count++;
                slow= slow->next;
               
            }
            
            //3 reposition
            //slow= head & fast= slow+ no of nodes
            
            slow= head;
            fast=head;
            
            //fast ko kitne distance door rkhna hai= count
            
            while(count--)
            {
                fast= fast->next;
            }
            
            //find starting of loop
            
            while(slow!= fast)
            {
                slow=slow->next;
                fast= fast->next;
            }
            //finally bring slow to last node
            
            while(slow->next!= fast)
            slow= slow->next;
            
            
            slow->next= NULL;
        }

    }
};
        
        