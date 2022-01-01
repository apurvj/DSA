#include<iostream>
#include<bits/stdc++.h>
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

Node *dlt(Node *head){
    if(head==NULL){
        return NULL;
    }else{
    Node *temp = head->next;
    delete head;
    return temp;
    }
}



int main() {
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head = dlt(head);
  trav(head);

  return 0;
}

