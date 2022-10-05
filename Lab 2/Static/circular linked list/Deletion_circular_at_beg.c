void begin_delete()  
{  
    struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted\n");  
    }  
      
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\nnode deleted\n");  
  
    }  
}  
