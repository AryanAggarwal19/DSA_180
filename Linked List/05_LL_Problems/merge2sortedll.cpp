/*Merge two sorted linked lists

Given two sorted linked lists consisting of N and M nodes respectively. 
The task is to merge both of the list (in-place) and return head of the merged list.


/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    
    //Method-2 without taking extra space
    
    Node *head= new Node(0), *tail= head;
    
    while(head1 && head2)
    {
    //compare
    if(head1->data <= head2->data)
    {
        tail->next= head1;
        head1= head1->next;
        tail= tail->next;
        tail->next=NULL;
    }
    else //head2 < head1
    {
        tail->next= head2;
        head2= head2->next;
        tail= tail->next;
        tail->next= NULL;
    }
    
    }
    //now,
    if(head1) //implies if head1 still exist
    {
        tail->next= head1;
    }
    else
    {
        tail->next= head2;
    }
    
    tail= head; //relocate tail to head;
    head= head->next;
    delete tail;
    
    return head;
    
}  
 