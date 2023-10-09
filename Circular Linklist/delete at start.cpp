void pop_front() {
  if(head != NULL) {
    
    //1. the list contains one node, delete
    //   make the head null
    if(head->next == head) {
      head = NULL;
    } else {
      
      //2. if the list contains more than one node,
      //   create two nodes - temp and firstNode, both
      //   pointing to head node
      Node* temp = head;
      Node* firstNode = head;
      
      //3. using temp node, traverse to the last node
      while(temp->next != head) {
        temp = temp->next;
      }
      
      //4. Make head as next of head,
      //   Make next of last node as head,
      //   delete the firstNode
      head = head->next;
      temp->next = head; 
      free(firstNode); 
    }
  }
}
