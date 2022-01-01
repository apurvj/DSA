#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int scndLarge(vector<int> &vec){
    int res = -1, largest = 0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>vec[largest]){
            res=largest;
            largest=i;
        }else if(vec[i]!=vec[largest]){
            if(res==-1||vec[i]>vec[res]){
                res=i;
            }
        }
    }
    return res;
}
 
int main(){
 vector<int> vec={5,10,20,12,20,8};
 cout<< scndLarge(vec);
  return 0;
}