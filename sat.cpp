#include <bits/stdc++.h>
using namespace std;
 
int Circular(int n)
{
 
    int Result = 1;
 
    while (n > 0) {
        Result = Result * n;
        n--;
    }
    Result *=2;
 
    return Result;
}
 
int main()
{
    int x; cin>>x;
 
    cout << Circular(x - 1);
}