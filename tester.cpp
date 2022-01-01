#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// vector, pair, set, map, stack, queue, dq, pq

int main(){
   stack<int> st;
   st.push(10);
   st.push(20);
   st.push(30);
   cout<<st.top();
   st.pop();
   cout<<st.top();
  return 0;
}