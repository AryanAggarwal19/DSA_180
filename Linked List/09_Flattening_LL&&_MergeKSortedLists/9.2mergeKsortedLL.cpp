                         /*Merge K sorted linked lists*/

/*
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

 

Example 1:

Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6
Example 2:

Input: lists = []
Output: []
Example 3:

Input: lists = [[]]
Output: []
 

Constraints:

k == lists.length
0 <= k <= 104
0 <= lists[i].length <= 500
-104 <= lists[i][j] <= 104
lists[i] is sorted in ascending order.
The sum of lists[i].length will not exceed 104.
*/ 

//merge logic
 Node * merge(Node *head1, Node *head2)
{
        Node *head= new Node(0);
        Node *tail= head;
        while(head1 && head2)
    {
            if(head1->data < head2->data)
        {
            tail->next= head1;
            head1= head1->next;
            tail= tail->next;
            tail->next= NULL;
        }
    
        else
        {
            tail->next= head2;
            head2= head2->next;
            tail= tail->next;
            tail->next= NULL;
        }
        
    }
    if(head1)
    tail->next= head1;
    
    else
    tail->next= head2;
    
    return head->next;
        
        
}

class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
           
           Node *head= arr[0];
           for(int i=1; i<K; i++)
           {
               head= merge(head,arr[i]);
           }
           return head;
    }
};
