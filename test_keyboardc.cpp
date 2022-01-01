#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Test(int n){
  int a = 0, b = 1, c =1;
  do{
    b=b*c;
    a = a + (b/c);
    c=c+1;
  }while(c<n);
  return a;
}

int main(){
 int n = 10;
 cout<< Test(n);
  return 0;
}