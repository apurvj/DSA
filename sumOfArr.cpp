#include<iostream>
using namespace std;

int getSum(int arr[],int n){
    int count = 0;
    for(int i =0;i<n;i++){
        count= count+ arr[i];
    }

    return count;
}
int getAvg(int arr[],int n){
    int avg = getSum(arr,n)/double(n);
    return avg;
}
int getMax(int arr[],int n){
    int currMax=arr[0];
    for(int i = 0;i<n;i++){
        currMax= max(currMax,arr[i]);
    }
    return currMax;
}
 
int main(){
    int n;
    cout<<"Enter no of elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element";
        cin>>arr[i];
    }
    cout<< getMax(arr,n);
  return 0;
}