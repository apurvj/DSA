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

Node *Insert(Node *head, int pos, int data){
    Node *temp = new Node(data);
    if(pos==1){
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for(int i = 0; i<= pos-2 && curr != NULL; i++){
        curr=curr->next;
    }
    if(curr == NULL){
        return head;
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
    Insert(head, 2, 40);
    trav(head);
 
  return 0;
}