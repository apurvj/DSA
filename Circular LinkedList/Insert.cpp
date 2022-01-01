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

Node *Ins(Node *head, int n){
    Node *temp = new Node(n);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }else{
    temp->next = head->next;
    head->next = temp;
    int x = head->data;
    head->data = temp->data;
    temp->data = x;

    return head;
    }

}

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
  head = Ins(head, 11);
  trav(head);
 
  return 0;
}