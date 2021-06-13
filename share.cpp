#include<iostream>
using namespace std;

void maxProfit(int arr[],int n){

    if(n<2)
        return;

    int i=0;
    while (i<n-1)
    {
        while ((i<n-1)&&(arr[i+1]<=arr[i]))
            i++;

        if(i==n-1)
            break;


        int buy = i++;
        while ((i<n)&&(arr[i]>=arr[i-1]))
            i++;

        int sell = i-1;

        cout<<"Buy on Day"<< buy<<" and sell on Day"<<sell<<". For a maximum profit of: ";
        int profit = arr[sell]-arr[buy];
        cout<<profit<<endl;
    }
    
}
 
int main(){
 int arr[]={10,5,6,7,2,5};
 int n = sizeof(arr)/sizeof(arr[0]);
 maxProfit(arr,n);
 return 0;
}