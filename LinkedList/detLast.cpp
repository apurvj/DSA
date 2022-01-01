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

void trav(Node *head) {
  Node *curr = head;
  while (curr != NULL) {
    cout << curr->data << endl;
    curr = curr->next;
  }
}

Node *dltLast(Node *head) {
  Node *curr = head;
  if (head == NULL)
    return NULL;
  if (head->next == NULL) {
    delete head;
    return NULL;
  } else {
    while (curr->next->next != NULL) {
      curr = curr->next;
    }
    delete (curr->next);
    curr->next = NULL;
    return head;
  }
}

int main() {
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head = dltLast(head);
  trav(head);
  return 0;
}