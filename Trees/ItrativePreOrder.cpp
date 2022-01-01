#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node *left;
    Node *right;
    int data;
    Node(int k){
        data =k;
        left = right = NULL;
    }
};

void ItrativeInOrder(Node* root){
    if(root == NULL) return;
    stack<Node*> s;
    Node *curr = root;
    s.push(root);
    while(!s.empty()){
        while(curr != NULL){
        cout<<curr->data<< " ";
        if(curr->right != NULL)
            s.push(curr->right);
        curr = curr->left;
        }
        curr = s.top();
        s.pop();

    }
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->right->left = new Node(50);

    ItrativeInOrder(root);

  return 0;
}