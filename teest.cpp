#include<iostream>
using namespace std;

int get_distinct(int ar[],int n){
        bool isDis=true;

    int count = 0; 
    for(int i = 0; i<n;i++){
        bool isDis=true;
        for(int j = i-1;j>=0;j--){
            if(ar[i]==ar[j]){
            isDis=false;
            break;
            }
        }
           if(isDis==true){
            count++;
    }
        
    }
 
    return count;

}

int main(){
int arr[7] = {1,2,3,4,5,3,1};
cout<<get_distinct(arr,7);


}