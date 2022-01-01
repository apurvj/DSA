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

void RemDup(Node *head){
    Node *curr = head;
    while(curr!=NULL && curr->next != NULL){
        if(curr->data == curr->next->data){
            Node *nxt = curr->next;
            curr->next = nxt->next;
            delete nxt;
        }else{
        curr=curr->next;
        }
    }
    // return head;     //no need of returning head as it remained unchanged.
}

void trav(Node *head) {
  Node *curr = head;
  while (curr != NULL ) {
    cout << curr->data << endl;
    curr = curr->next;
  }
}
 
int main(){
  Node *head = new Node(10);
  head->next = new Node(10);
  head->next->next = new Node(30);
  head->next->next->next = new Node(30);
  head->next->next->next->next = new Node(50);
  RemDup(head);
  trav(head);
 
  return 0;
}