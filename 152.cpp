#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
#define n 10
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int arr[n];
      int sum=0;
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          sum+=arr[i];
        
      }
      cout<<sum%2;
   


      return 0;



}