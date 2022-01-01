#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void ZeroEnd(vector<int> vec){
    int count = 0;
    for(int i =0;i<vec.size();i++){
        if(vec[i]!=0){
            swap(vec[i],vec[count]);
            count++;
        }
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}
 
int main(){
 vector<int> vec = {4,6,0,0,12,0,8};
 ZeroEnd(vec);

  return 0;
}