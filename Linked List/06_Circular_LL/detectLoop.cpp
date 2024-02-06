
//      Detect Loop in linked list

//Given a linked list of N nodes. The task is to check if the linked list has a loop. 
//Linked list can contain self loop.

//The task is to complete the function detectloop() which contains reference to the head as only argument.
//This function should return true if linked list contains loop, else return false.

                                                                                                                                                                       // Approach-1 memorizing the visited node address through array

                                                                                                                                                                       class Solution
{
    public:

      //Approach1 memorizing the addresses of visited indexes 
    
    bool check(vector<Node*>&visited, Node *curr)
    {
        for(int i=0; i<visited.size(); i++)
        {
            if(visited[i]==curr)
              return 1;
        }
        return 0;
    }
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        
        Node *curr= head;
        vector<Node*>visited;
        
        while(curr!=NULL)
        {  
            //check if curr node is already visited or not
            if(check(visited,curr))
            return 1;
            
            else{
                visited.push_back(curr);
                curr= curr->next;
            }
        }
        
        return 0;   
    }
};

//Approach2  Slow and fast pointer approach

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // Approach => slow and fast pointer
        
        Node *slow= head;
        Node *fast= head;
        
        while(fast!= NULL && fast->next!= NULL)
        {
            slow= slow->next;
            fast= fast->next->next;
            
            //check
            if(slow==fast)
            {
                return 1;
            }
            
        }
        return 0;
    }
};

//Approach3 Unordered_Maps

bool detectLoop(Node* head)
    {
        // Approach => unordered map approach
        
        Node *curr= head; //to traverse the given LL
        
        //setup map
        unordered_map<Node*, bool>visited;
        
        while(curr != NULL)
        {
            //check , if the current node address is already visited or not
            if(visited[curr]==1)
            {
                //if true, implies u visited the node before thus loop exists
                return 1;
            }
            visited[curr]=1;
            curr= curr->next;
        }
        return 0;
    }   
        
        

