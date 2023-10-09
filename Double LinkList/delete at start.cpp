void pop_front() {
  if(head != NULL) {
    
    //1. if head is not null, create a
    //   temp node pointing to head
    Node* temp = head;

    //2. move head to next of head
    head = head->next;
    head 

    //3. delete temp node
    free(temp); 

    //4. If the new head is not null, then
    //   make prev of the new head as null
    if(head != NULL)
      head->prev = NULL;
  }
}
