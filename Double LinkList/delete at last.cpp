void pop_back() {
  if(head != NULL) {
    
    //1. if head in not null and next of head
    //   is null, release the head
    if(head->next == NULL) {
      head = NULL;
    } else {
      
      //2. Else, traverse to the second last 
      //   element of the list
      Node* temp = head;
      while(temp->next->next != NULL)
        temp = temp->next;
      
      //3. Change the next of the second 
      //   last node to null and delete the
      //   last node
      Node* lastNode = temp->next;
      temp->next = NULL;
      free(lastNode); 
    }
  }
}
