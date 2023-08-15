class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        
        ListNode *temp = head;
        ListNode *dummy = NULL;
        
        int count = 0;
        
        
        while(temp->next != NULL)
        {
            count++;
            dummy = temp ;
            temp = temp->next;
        }
        
        if(count != 0)
        {
            temp->next = head;
            dummy->next = NULL;
        
            return temp;
        
        }
        
        return head;
        
      
        
    }
};
