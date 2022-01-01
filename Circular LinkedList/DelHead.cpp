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

Node *DelHead(Node *head){
   
    if(head == NULL){
        return NULL;
    }
    if(head->next == head){
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node * t = head->next;
    head->next = t->next;
    delete t;
    return head;
    
    }

Node *DelK(Node *head, int k){
    if(head == NULL) return head;
    if(k == 1) DelHead(head);

    Node *cur = head;
        for(int i=0; i<k-2; i++){
            cur = cur->next;
        }
        Node *temp = cur->next;
        cur->next = temp->next;
        delete temp;
        return head;
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
  DelK(head, 2);
  trav(head);
 
  return 0;
}