#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<vector<int>> mat1(n,vector<int>(n,0)); // n rows and coulmn of size n and default value as 0
    vector<vector<int>> mat2(n,vector<int>(n,0));
    vector<vector<int>> ans(n,vector<int>(n,0));

    cout<<"Enter data for 1st matrix: \n\n";
    for(int i = 0;i<n;i++){
      for(int j = 0; j<n; j++){
        int t;
        cin>>t;
        mat1[i][j]=t;
      }
    }

    cout<<"Enter data for 2nd matrix: \n\n";
    for(int i = 0;i<n;i++){
      for(int j = 0; j<n; j++){
        int t;
        cin>>t;
        mat2[i][j]=t;
      }
    }

     for(int i = 0;i<n;i++){
      for(int j = 0; j<n; j++){
        ans[i][j]=0;
        for(int k=0;k<n;k++){
            ans[i][j]=ans[i][j]+(mat1[i][k]*mat2[k][j]);
        }
      }
    }



    cout<<"\n\n\nThe result of Matrix multiplication is: \n\n\n";

    for(int i = 0;i<n;i++){
      for(int j = 0; j<n; j++){
        cout<<ans[i][j]<<"  ";
      }
      cout<<"\n";
    }

    cout<<"\n\n\n";



  return 0;
}