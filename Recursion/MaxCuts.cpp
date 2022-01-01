#include<iostream>
#include<bits/stdc++.h>
#include <algorithm> 
using namespace std;

int MaxCuts(int n, int a, int b, int c){
    if(n==0){
        return 0;
    }
    if(n<=-1)
        return -1;
    
    int Maximum = max(MaxCuts(n-a,a,b,c),
                      max(MaxCuts(n-b,a,b,c),
                      MaxCuts(n-c,a,b,c)));
    if(Maximum==-1)
        return -1;

    return Maximum+1;

}
 
int main(){
 
 cout<< MaxCuts(5,2,1,5);
  return 0;
}