Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node *temp = head;
 
 while(temp->next!=NULL)
 {
     if(temp->data == temp->next->data)
     {
         Node *del = temp->next;
         temp->next = del->next;
         delete del;
     }
     
     else
     {
         temp = temp->next;
     }
 }
 
 return head;
}
