bool detectloop(Node* head){
  if(head==NULL){
    return false;
  } 
  map<Nide*,bool>visited;
  
  Node* temp=head; 
  
  whule(temp != NULL){
    if(visited[temp]== true){
      return 1;
    } 
    visited[temp]= true;
    temp= temp->next;
  }  
  
  return false;
}