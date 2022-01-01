#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int MaxProd(int arr[],int n, int k){
    int counter = 0;
    for(int i = 0; i< n; i++){
        int p = arr[i];
        for(int j = 1; j< n ; j++){
            while(p<k){
            p*=arr[j];
            counter++;
            }
            p=1;
        }
    }
    return counter;
}
     
 
int main(){
 int arr[] =  {2, 4, 5, 3};
 cout<< MaxProd(arr,4,12);
  return 0;
}