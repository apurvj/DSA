#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public: 
  int minCoins(int ar[],int n,int amount) {
      sort(ar, ar+n, greater<int>());
      int res =0;
      for(int i = 0; i<n;i++){
        if(amount == 0)
          break;
        if(ar[i]<=amount){
          int c = floor(amount/ar[i]);
          cout<< c << " ";
          res += c;
          amount -= c*ar[i];
        }
      }
      return res;

  }
};

int main(){
  int n, amt;
  cin>> amt;
  cin >>n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  Solution obj;
  int x = obj.minCoins(arr, n, amt);
  cout<< x;
  return 0;
}