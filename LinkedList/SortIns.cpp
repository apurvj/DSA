#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node *next;
    int data;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node *SortIns(Node *head, int x){
     Node *temp = new Node(x);
    
    Node *curr = head;
    if(curr == NULL){
        return head;
    }
    if(x < head->data){
        temp->next = head;
        return temp;
    }

    while(curr->next!=NULL&& x> curr->next->data){
        curr=curr->next;
    }
    temp->next = curr->next;
    curr-> next = temp;
    return head;
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
    SortIns(head, 22);
    trav(head);
 
  return 0;
}