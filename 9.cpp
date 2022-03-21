#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
    int sum,n;
    cin>>n;
    sum= n*(n+1)/2;
    cout<<sum;


      return 0;


}