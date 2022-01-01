#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node {
  Node *next;
  int data;
  Node(int n) {
    data = n;
    next = NULL;
  }
};

void Search(Node *head, int n) {
  int counter = 1;
  while (head != NULL) {
    if (head->data == n) {
      break;
    } else {
      counter++;
      head = head->next;
    }
  }
  cout << counter;
}

int main() {
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  Search(head, 30);
  return 0;
}