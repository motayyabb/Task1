void PrintList() {
  
  //1. create a temp node pointing to head
  Node* temp = head;

  //2. if the temp node is not null continue 
  //   displaying the content and move to the 
  //   next node till the temp becomes head
  if(temp != NULL) {
    cout<<"The list contains: ";
    while(true) {
      cout<<temp->data<<" ";
      temp = temp->next;
      if(temp == head) 
        break;
    }
    cout<<"\n";
  } else {

    //3. If the temp node is null at the start, 
    //   the list is empty
    cout<<"The list is empty.\n";
  }
}    
