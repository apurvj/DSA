#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
struct Node{
    Node* next;
    int data;
    Node(int k){
        data =k;
        next = NULL;
    }
};

void Count(Node* head){
    Node *temp = head;
    int count =0;
    while(temp!=NULL)
        count++, temp = temp->next;
    cout<<count<<"\n";
}

void Alternate(Node* head){
    while(head != NULL)
        cout<<head->data<<" ", head = head->next->next;
    cout<<"\n";
}


int main(){
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  head->next->next->next->next = new Node(50);
  Count(head);
  Alternate(head);

  return 0;
}