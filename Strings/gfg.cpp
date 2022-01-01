void moveZeroes(struct Node **head)
{
    //Your code here
    if (*head == NULL)
    return;
 
  // Traverse the list from second node.
  struct Node *temp = (*head)->next, *prev = *head;
  
  while (temp != NULL) {
 
    // If current node is 0, move to
    // beginning of linked list
    if (temp->data == 0) {
 
      // Disconnect node from its
      // current position
      Node *curr = temp;
      temp = temp->next;
      prev->next = temp;
 
      // Move to beginning
      curr->next = (*head);
      *head = curr;
    }
 
    // For non-zero values
    else {
      prev = temp;
      temp = temp->next;
    }
  }
}