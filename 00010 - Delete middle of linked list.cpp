Node* deleteMid(Node* head)
{
    // Your Code Here
     Node *slow = head;
     Node *fast = head;
     Node *dummy = NULL;
     int count = 0;
        
        while(fast != NULL && fast->next != NULL)
        {
            count ++;
            dummy = slow;
            slow=slow->next;
            fast = fast->next->next;
        }
        
        if( count != NULL)
      {     
          dummy->next = slow->next;
          slow->next = NULL;
        
          return head;
      }
      
      return NULL;
        
        
        
}
