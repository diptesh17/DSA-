class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
        Node *prev = NULL;
        Node *curr=head;
        Node *nxt ;
        int count = 0;
        
        while(curr != NULL)
        {
            count++;
            nxt = curr->next;
            curr->next = prev;
            
            prev=curr;
            curr=nxt;
        }
        
       if(n>count)
       return -1;
       
       else
       {
            n--;
        
        while(n--)
        prev = prev->next;
        
        return prev->data;
       }
    }
};
