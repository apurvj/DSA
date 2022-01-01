#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Reverse(vector<int> vec){

    int low = 0, high = vec.size()-1;

    for(int i=0;i<vec.size();i++){

        if(low<high){
        swap(vec[low],vec[high]);
        low++;
        high--;
        }
    }
    
    for(int i= 0;i<vec.size();i++){
        cout<<"   "<< vec[i]<< " ";
    }

}
 
int main(){
 vector<int> vec = {5,7,8,10,11};
 Reverse(vec);
 
  return 0;
}