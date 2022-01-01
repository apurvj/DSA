#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node {
  Node *next;
  int data;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


Node *InsertBegin(Node *head, int n) {
//   Node *newHead = new Node(n);
//   newHead->next = head;
Node *end = new Node(n);
    if(head == NULL){
        return end;
    }
    Node *curr = head;
    while(curr->next !=NULL){
        curr = curr->next;
    }
    curr->next = end;
    return head;
}

void trav(Node *head) {
  Node *curr = head;
  while (curr != NULL) {
    cout << curr->data << endl;
    curr = curr->next;
  }
}

int main() {
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  InsertBegin(head,40);
  trav(head);

  return 0;
}