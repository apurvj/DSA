#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Fibonacci(int n){
    if(n<=1){
        return n;
    }
    return Fibonacci(n-1)+Fibonacci(n-2);

}
 
int main(){
   cout<< Fibonacci(4);
 
  return 0;
}