#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int CHAR = 256;

LeftMostRepeating(string &s){
    bool visited[CHAR];
    int res = -1;
    fill(visited, visited+ CHAR, false);
    for(int i = s.length()-1; i>=0; i--){
        if(visited[s[i]]){
            res = i;
        }else{
            visited[s[i]] = true;
        }
    }
    return res;
}



int main(){
string str1;
cin>> str1;
cout<< LeftMostRepeating(str1); 
  return 0;
}