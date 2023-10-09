void pop_at(int position) {     
  
  //1. check if the position is > 0
  if(position < 1) {
    cout<<"\nposition should be >= 1.";
  } else if (position == 1 && head != NULL) {
      
    //2. if the position is 1 and head is not null, make
    //   head next as head and delete previous head 
    Node* nodeToDelete = head;
    head = head->next;
    free(nodeToDelete);
    if(head != NULL)
      head->prev = NULL;
  } else {
    
    //3. Else, make a temp node and traverse to the 
    //   node previous to the position
    Node* temp = head;
    for(int i = 1; i < position-1; i++) {
      if(temp != NULL) {
        temp = temp->next;
      }
    }
 
    //4. If the previous node and next of the previous  
    //   is not null, adjust links 
    if(temp != NULL && temp->next != NULL) {
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        if(temp->next->next != NULL)
          temp->next->next->prev = temp->next;  
        free(nodeToDelete); 
    } else {

      //5. Else the given node will be empty.
      cout<<"\nThe node is already null.";
    }       
  }
} 
