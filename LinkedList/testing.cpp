#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 string str = "";
 cin>> str;
 int arr[26] = {0};
 for(int i =0;i<str.length();i++){
   arr[str[i]-'a']++;
 }
 for(int i =0;i<26;i++){
   if(arr[i]== 0)
   {
    cout<< "Not a pangram"<<endl;
    return 0;
   }
 }
 cout<<"Pangam Found"<<endl;
  return 0;
}