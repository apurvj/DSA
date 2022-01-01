#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 string str = "RandomShit";

 int res = str.find("ndomS");
 if(res == string::npos){
     cout<< "Not Present"<<endl;
 }else{
     cout<<"First occurance at index "<< res<< endl;
 }
  return 0;
}