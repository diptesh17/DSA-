// second last position -> fast->next->next
// last position -> fast->next 


Node* insertInMiddle(Node* head, int x)
{

    Node *slow = head;
    Node *fast = head;
    
    while(fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    
    Node *newnode = new Node(x);
    newnode->next = slow->next;
    slow->next = newnode;
    
    return head;
	
	
}
