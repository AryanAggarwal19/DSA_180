//    02_Find the lemgth of the loop

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
  //Approach => fast and slow pointer approach
  
  //Step-1 Detect loop in given LL
  
  Node *slow= head,*fast= head;
  
  while(fast!= NULL && fast->next!= NULL)
  {
      slow= slow->next;
      fast= fast->next->next;
      
      //check
      if(slow==fast)
      break;
  }
  
  //now Loop break can happen only bcz of 2 reasons
  //reason1  //loop doesn't exist
  if(fast==NULL || fast->next==NULL)
  return 0;
  
  else //loop does exist
  {
      int count=1;
      slow=  fast->next;
      while(slow!= fast)
      {
          count++;
          slow= slow->next;
      }
      return count;
  }
  
  
  
  
  
  
  
}