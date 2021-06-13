#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Changing rows to column and column to rows.

int main(){
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(n,0)); // n rows and coulmn of size n and default value as 0
    vector<vector<int>> ans(n,vector<int>(n,0));
    for(int i = 0;i<n;i++){
      for(int j = 0; j<n; j++){
        int t;
        cin>>t;
        vec[i][j]=t;
      }
    }
      for(int i = 0;i<n;i++){
       for(int j = 0; j<n; j++){
        ans[j][i]= vec[i][j];
       }
      }
      cout<<"\n\n\nTranspose of the given matrix is: \n\n\n";

      for(int i = 0;i<n;i++){
       for(int j = 0; j<n; j++){
        cout<<ans[i][j]<<"  ";
       }
       cout<<"\n";
      }
      cout<<"\n\n\n";


  return 0;
}