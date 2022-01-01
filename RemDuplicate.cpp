#include<iostream>
#include<bits/stdc++.h>
using namespace std;

RemDuplicate(vector<int> vec){
    int res = 1;
    for(int i=1;i<vec.size();i++){
        if(vec[i]==vec[res-1]){
            vec[res]=vec[i];
            res++;
        }
    }
    return res;

}
 
int main(){

    vector<int> vec = {10,10,12,13,13};
    cout<< RemDuplicate(vec);
 
  return 0;
}