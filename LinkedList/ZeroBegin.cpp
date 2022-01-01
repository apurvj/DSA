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

Node *ZeroFst(Node *head){
    Node *lst = head->next;
    Node *fst = head;
    while(fst != NULL && lst !=NULL){
        if(lst->data == 0){
          int temp = lst->data;
          lst->data = fst->data;
          fst->data = temp;
          fst = fst->next; 
        }else{
            lst = lst->next;
        }
    }
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
    head->next = new Node(30);
    head->next->next = new Node(0);
    head = ZeroFst(head);
    trav(head);
 
  return 0;
}