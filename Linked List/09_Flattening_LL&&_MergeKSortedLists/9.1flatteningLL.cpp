/*
Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:
(i) a next pointer to the next node,
(ii) a bottom pointer to a linked list where this node is head.
Each of the sub-linked-list is in sorted order.
Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order. 

Note: The flattened list will be printed using the bottom pointer instead of the next pointer.
For more clarity have a look at the printList() function in the driver code.
*/ 

//{ Driver Code Starts


	int t;
	cin>>t;
	while(t--){
    int n,m,flag=1,flag1=1;
    struct Node * temp=NULL;
	struct Node * head=NULL;
	struct Node * pre=NULL;
	struct Node * tempB=NULL;
	struct Node * preB=NULL;
		cin>>n;
        int work[n];
		for(int i=0;i<n;i++)
            cin>>work[i];
		for(int i=0;i<n;i++){
			m=work[i];
			--m;
			int data;
			scanf("%d",&data);
			temp = new Node(data);
			temp->next = NULL;
			temp->bottom = NULL;
			
			if(flag){
				head = temp;
				pre = temp;
				flag = 0;
				flag1 = 1;
			}
			else{
				pre->next = temp;
				pre = temp;
				flag1 = 1;
			}
			for(int j=0;j<m;j++){
				
				int temp_data;
				scanf("%d",&temp_data);
				tempB = new Node(temp_data);

				if(flag1){
					temp->bottom=tempB;
					preB=tempB;
					flag1=0;
				}
				else{
					preB->bottom=tempB;
					preB=tempB;
				}
			}
		}
		   Node *fun = head;
		   Node *fun2=head;

            Node* root = flatten(head);
            printList(root);
            cout<<endl;

	}
	return 0;
}

// } Driver Code Ends


/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/
//   function which return the head of the merged linked list
Node * merge(Node *head1, Node *head2)
{
    Node *head= new Node(0);// dummy Node
    Node *tail= head;
    
    //merge Logic
    while(head1 && head2)
    {
        //comparisons
        if(head1->data <= head2->data)
        {
            tail->bottom= head1;
            head1= head1->bottom;
            tail= tail->bottom;
            tail->bottom= NULL;
        }
        else
        {
            tail->bottom= head2;
            head2= head2->bottom;
            tail= tail->bottom;
            tail->bottom= NULL;
        }
    }
    //once the while loop breaks we need to check few condition
    if(head1)
    tail->bottom= head1;
    
    else
    tail->bottom= head2;
    
    return head->bottom;
}

/*  Function which returns the  root of 
    the flattened linked list. */
Node *flatten(Node *root)
{
   // Your code here
   Node *head1,*head2,*head3;
   
   while(root->next)
   {
       head1= root;
       head2= root->next;
       head3= root->next->next;
       
       //conection break
       head1->next= NULL;
       head2->next= NULL;
       
       root= merge(head1,head2);
       root->next= head3;
   };
   
   return root;
   
   
   
   
   
   
   
   
   
   
}

