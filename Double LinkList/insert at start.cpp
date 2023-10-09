void push_front(int newElement) {
  
  //1. allocate node
  Node* newNode = new Node();
  
  //2. assign data element
  newNode->data = newElement;
  
  //3. assign null to the next and prev
  //   of the new node
  newNode->next = NULL; 
  newNode->prev = NULL;

  //4. Check the list is empty or not,
  //   if empty make the new node as head 
  if(head == NULL) {
    head = newNode;
  } else {
    
    //5. Adjust the links and make the new
    //   node as head
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
  }    
}
