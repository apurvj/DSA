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

void Nfrmlst(Node* head, int n){
    Node *fast = head;
    for(int i =0;i<n;i++){
        if(fast==NULL) return;
        fast= fast->next;
    }
    Node *slow = head;
    while(fast!= NULL){
        fast=fast->next;
        slow= slow->next;
    }
    cout<< slow->data;
}
 
int main(){

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    Nfrmlst(head,2);
 
  return 0;
}