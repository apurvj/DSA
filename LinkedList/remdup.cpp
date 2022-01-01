#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
 void Rem(int arr[], int n){
     vector<int> ans;
     sort(arr, arr+n);
     for(int i =0; i<n; i++){
         int j=i;
         if(arr[j]==arr[j+1]){
         ans.push_back(arr[j]);
     }
     }
     for(int i = 0; i<ans.size();i++){
         cout<< ans[i]<< " ";
     }
 }

int main(){
 int arr[] = {2,3,1,2,2,4,3};
 Rem(arr, 6);
  return 0;
}