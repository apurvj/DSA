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

void Middle(Node *head){
    if(head == NULL){
        return;
    }
    Node *dble = head, *middle = head;
    while(dble!=NULL && dble->next != NULL){
        middle = middle->next;
        dble= dble->next->next;
    }
    cout<< middle->data;
}

 
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    Middle(head);

 
  return 0;
}