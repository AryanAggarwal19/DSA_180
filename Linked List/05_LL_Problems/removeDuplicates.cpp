/* Remove duplicate element from sorted Linked List

Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).
Note: Try not to use extra space. The nodes are arranged in a sorted way.

*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here

 //Method-2 (without using any extra space)
 Node *prev= head, *curr= head->next;
 
 while(curr)
 {
     if(curr->data==prev->data)
     {
         //delete current
         
         prev->next= curr->next;
         delete curr;
         curr= prev->next;
     }
     else{
         //curr->data != prev->data => duplicate nhi hai
         curr= curr->next;
         prev= prev->next;
     }
 }
 return head;


// First_Method 
//Extra space (Consider)
//Logic Linked list traverse,and push only unique values to the ans array


// vector<int>ans;
// ans.push_back(head->data);
// Node *curr= head->next;

// while(curr)
// {  
//     //duplicate nhi mila
//     if(curr->data!=ans[ans.size()-1])
//     {
//         ans.push_back(curr->data);
      
//     }
//     //otherwise
//     curr=curr->next;
// }

// //like this way ans array generate ho jayegi
// //the next step is to copy the elements of ans array to ll
// curr= head;
// int index=0;
// while(index < ans.size())
// {
//     curr->data=ans[index];
//     index++;
//     curr=curr->next;
// }
// curr= head;
// int size= ans.size()-1;
// while(size--){
//     curr=curr->next;
// }
// curr->next=NULL;

// return head;

}