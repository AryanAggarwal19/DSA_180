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

    int main()
    {
    Node *head= NULL;
    //Insertion at start
    if(head==NULL){
        head= new Node(5);
    }
    else{
        //LL does exist
        Node *temp= new Node(5);
        temp->next= head;
        head->prev= temp;
        head=temp;
    }
    //Insertion at last
    if(head==NULL){//LL doesn't exist
        head= new Node(5);
    }
    else{
        //LL exist already
        Node *curr= head;
        while(curr->next==NULL){
            curr=curr->next;
        }
        Node *temp= new Node(5);
        curr->next= temp;
        temp->prev= curr;
    }

    //traversal code
    Node *trav= head;
    while(trav)
    {
        cout<<trav->data<<"";
        trav=trav->next;
    }






    }




    









