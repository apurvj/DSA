#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int MaxProd(int arr[],int n, int k){
    int end=0,start=0;
    long long ans=0,temp=1;
    while(end<n)
    {
        temp*=arr[end];
        while(start<end && temp>k)
        {
            temp/=arr[start];
            start++;
        }
        if(temp<k)
        {
            ans+=end-start+1;
        }
       
        end++;
    }
    
    return ans;
}
     
 
int main(){
 int arr[] =  {9, 8, 5, 3};
 cout<< MaxProd(arr,4,2);
  return 0;
}