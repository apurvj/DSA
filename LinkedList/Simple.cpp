#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node *next;
    int data;
    Node(int n){
        data =n;
        next = NULL;

    }
};

void trav(Node *head){
// cout<<head->data<<"-->"<<head->next->data<<"-->"<<head->next->next->data;
// Node *curr=head;
// while(curr!=NULL){
// cout<< curr->data<<endl;
// curr=curr->next;
if(head==NULL){
    return;
}
cout<<head->data<<endl;
trav(head->next);
 
// }
}
int main(){
    Node *head = new Node(10);
    head->next= new Node(20);
    head->next->next= new Node(30);
    trav(head);
    
 
  return 0;
}