#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 
int main(){
    string str;
    cout<< "Enter a string: "<<endl;
    getline(cin, str);
    int s = 0, e = str.length()-1;
    while(s<=e){
        if(str[s]!=str[e]){
            cout<<"Not a palindrome";
            return 0;
        }else{
            s++;
            e--;
        }
    }
    cout<< "A palindrome"; 
  return 0;
}