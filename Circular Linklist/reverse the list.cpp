void reverseList() {
  //1. If head is not null create three nodes
  //   prevNode - pointing to head,
  //   tempNode - pointing to head,
  //   curNode - pointing to next of head
  if(head != NULL) {
    Node* prevNode = head;
    Node* tempNode = head;
    Node* curNode = head->next;
    
    //2. assign next of prevNode as itself to make the
    //   first node as last node of the reversed list
    prevNode->next = prevNode;
    
    while(curNode != head) {
      //3. While the curNode is not head adjust links 
      //   (unlink curNode and link it to the reversed list 
      //   from front and modify curNode and prevNode) 
      tempNode = curNode->next;
      curNode->next = prevNode;
      head->next = curNode;
      prevNode = curNode;
      curNode = tempNode;
    }

    //4. Make prevNode (last node) as head
    head = prevNode;
  }
}
