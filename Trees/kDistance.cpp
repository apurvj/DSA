#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node *left;
    Node *right;
    int data;
    Node(int k){
        data = k;
        left = right = NULL;
    }
};

void kDistance(Node *root, int k){
    if(root == NULL) return;
    if(k == 0) cout<< root->data;

kDistance(root->left,k-1);
kDistance(root->right, k-1);
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->right->left = new Node(50);


    kDistance(root, 2);
 
  return 0;
}