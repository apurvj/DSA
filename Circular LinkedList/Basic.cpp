#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node *next;
    int data;
    Node(int x){
        data = x;
        next= NULL;
    }
};

void trav(Node *head) {
  if(head == NULL) return;
  cout<< head->data<< endl;
  for(Node *p = head->next; p!= head; p = p->next){
      cout<< p->data<< endl;
  }
}


int main(){
    Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  head->next->next->next->next = new Node(50);
  head->next->next->next->next->next = head;
  trav(head);
 
  return 0;
}