#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n==0)
        return 0;
    fun(n-1);
    cout<< n<< " ";
    fun(n-1); 

} 
int main(){
 fun(3);
  return 0;
}