void pop_back() {
  if(head != NULL) {
    
    //1. if head in not null and next of head
    //   is head, release the head
    if(head->next == head) {
      head = NULL;
    } else {
      
      //2. Else, traverse to the second last 
      //   element of the list
      Node* temp = head;
      while(temp->next->next != head)
        temp = temp->next;
      
      //3. Change the next of the second 
      //   last node to head and delete the
      //   last node
      Node* lastNode = temp->next;
      temp->next = head;
      free(lastNode); 
    }
  }
}
