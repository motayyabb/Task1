void PrintList() {
  Node* temp = head;
  if(temp != NULL) {
    cout<<"The list contains: ";
    while(temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;}
    cout<<"\n";
  } else {
    cout<<"The list is empty.\n";
  }
} 
