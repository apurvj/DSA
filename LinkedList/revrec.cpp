#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node *RecRev(Node *head){
    if(head == NULL || head->next == NULL) return head;
    Node *rest_head = RecRev(head->next);
    Node *rest_tail = head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;

}

void trav(Node *head) {
  Node *curr = head;
  while (curr != NULL) {
    cout << curr->data << endl;
    curr = curr->next;
  }
}

 
int main(){
      Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  head->next->next->next->next = new Node(50);
  head = RecRev(head);
  trav(head);
 
  return 0;
}