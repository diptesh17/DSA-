int GetNth(struct node* head, int index){
  // Code here
  
  node *temp = head;
  
  int count =0 ;
  
  while( temp != NULL && count < index-1)
  {
      temp = temp->next;
      count ++;
  }
  
  return ( temp->data);
 
}
