void push_back(int newElement) {
  
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
    
    //5. Else, traverse to the last node
    Node* temp = head;
    while(temp->next != NULL)
      temp = temp->next;
    
    //6. Adjust the links
    temp->next = newNode;
    newNode->prev = temp;
  }    
}
