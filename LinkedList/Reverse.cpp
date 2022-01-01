#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node *next;
  Node(int n) {
    data = n;
    next = NULL;
  }
};
Node *Reverse(Node *head) {
  Node *curr = head;
  Node *prv = NULL;
  while (curr != NULL) {
    Node *nxt = curr->next;
    curr->next = prv;
    prv = curr;
    curr = nxt;
  }
  return prv;
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
  head->next->next->next = new Node(40);
  head->next->next->next->next = new Node(50);
  head = Reverse(head);
  trav(head);

  return 0;
}