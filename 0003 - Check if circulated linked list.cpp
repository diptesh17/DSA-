bool isCircular(Node *head)
{
   // Your code here
   
   if(head == NULL)
   return true;
   
   Node *temp = head->next;
   
   while(temp != head && temp != NULL)
   {
       temp = temp->next;
   }
   
   if(temp == NULL)
     return false;
     
   else
   return true;
   
}
