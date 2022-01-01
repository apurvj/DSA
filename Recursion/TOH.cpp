#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void TOH(int n, char A, char B, char C){
    if(n==1){
        cout<<"Move Disk 1 from tower "<<A<< " to tower "<< C<<endl;
        return;
    }
        TOH(n-1,A,C,B);
        cout<<"Move Disk "<<n<<" from tower "<< A <<" to tower "<< C <<endl;
        TOH(n-1,B,A,C);
    
}

int main(){
    int n = 3;
 TOH(n,'A','B','C');
  return 0;
}