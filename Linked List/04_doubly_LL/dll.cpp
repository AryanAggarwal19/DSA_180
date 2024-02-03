#include<iostream>
using namespace std;

    class Node{
        public:
        int data;
        Node *prev;
        Node *next;

        Node(int val){
            data= val;
            next=prev= NULL;
        }
    };

    Node* createDoublyLL(int arr[],int index,int size,Node *back)
    {
        //BASE_CONDITION
        if(index==size){
            return NULL;
        }
        //RECURSIVE_LOGIC => whenever a function call happen, new node will be created, having address of back node

        Node *temp= new Node(arr[index]);
        temp->prev= back;
        temp->next = createDoublyLL(arr,index+1,size,temp);
        return temp;

    }
    int main()
    {
    Node *head= NULL,*tail=NULL;

    int arr[]= {1,2,3,4,5};
    
    //Converting given Array to doubly Linked List through Recursion
    head= createDoublyLL(arr,0,5,NULL);


    //Delete a node at start

    if(head!=NULL){ //deletion happen only when LL does exist
        //Check if there exist only one node 
        if(head->next==NULL){
            delete head; //delete all the resources stored at locaation that head was pointing to
            head=NULL;
        }
        else{//more than one node exist
        Node *temp = head;
        head=head->next;
        delete temp;
        //if(head)
        head->prev=NULL;
    }

    //Delete a node at end
    if(head!=NULL){//check if LL exist

//now check if only one node exist
    if(head->next==NULL){

        delete head;
        head=NULL;

    }
      else{  //generic solution //for more than one node
        Node *temp= head;
        while(temp->next){
            temp= temp->next;
            temp->prev->next=NULL;
            delete temp;
        }
    }

    //Delete a node at any given position
    int pos= 3;

    //delete at start
    if(pos==1){ //isme bhi 2cases bnte hai
       if(head->next==NULL){
        //implies only one node exists
        delete head;
        head=NULL;
       }
       else{//more than one node exists and i've to delete the first node
       Node *temp= head;
       head= head->next;
       delete temp;
       head->prev=NULL;

       }
    }
    else{
        Node *curr = head;
        while(--pos){
            curr=curr->next;
        }
    
    //delete at end
    if(curr->next==NULL){// implies curr jis node pr hai wo last node hai
       curr->prev->next=NULL;
       delete curr;
    }
      //delete at middle
    else{
        curr->prev->next= curr->next;
        curr->next->prev= curr->prev;
        delete curr;

    }
  

    }

    
      
    //Converting given Array to doubly Linked List

    // for(int i=0;i<5;i++)
  
    // {
    //     //Initially when LL doesn't exit
    //     if(head==NULL){
    //         head= new Node(arr[i]);
    //         tail= head;
    //     }
    //     //once LL initialisze
    //     else{
    //         //Insertion at end
    //         Node *temp= new Node(arr[i]);
    //         tail->next= temp;
    //         temp->prev= tail;
    //         tail= temp;// to track the tail
    //     }

    // }
  



    // //Insertion at start
    // if(head==NULL){
    //     head= new Node(5);
    // }
    // else{
    //     //LL does exist
    //     Node *temp= new Node(5);
    //     temp->next= head;
    //     head->prev= temp;
    //     head=temp;
    // }
    // //Insertion at last
    // if(head==NULL){//LL doesn't exist
    //     head= new Node(5);
    // }
    // else{
    //     //LL exist already
    //     Node *curr= head;
    //     while(curr->next==NULL){
    //         curr=curr->next;
    //     }
    //     Node *temp= new Node(5);
    //     curr->next= temp;
    //     temp->prev= curr;
    // }

    // //traversal code
    // Node *trav= head;
    // while(trav)
    // {
    //     cout<<trav->data<<"";
    //     trav=trav->next;
    // }

    // Insertion at any given position ,

    int pos= 2;

    //insert at start
    if(pos==0){
        //LL exist na kre
        if(head==NULL){
            head= new Node(5);
        }
        //LL already exist
        else{
            Node *temp= new Node(5);
            temp->next= head;
            head->prev= temp;
            head= temp;
        }
    }
    else{
        Node *curr= head;
        //Go to the node, after which insertion need to take place
        while(--pos){
            curr= curr->next;
        };
        //check if the current node is last node or not
        if(curr->next==NULL) //implies last node
        {
            Node *temp= new Node(5);
            temp->prev= curr;
            curr->next= temp;
        }
        else{ // current node somewhere in middle
            Node *temp= new Node(5);
            temp->next= curr->next;
            temp->prev= curr;
            curr->next= temp;
            temp->next->prev= temp;
        }
    }





    // Insert at start
    //Insert at end
    // Insert somewhere in middle

  

    






    }




    









