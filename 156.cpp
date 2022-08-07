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
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      // ascendign order
      // sort(arr,arr+n);
      // descending order
      sort(arr,arr+n,greater<int>());
      for(int i=0;i<n;i++)
      {
          cout<<arr[i]<<endl;
      }
      



      return 0;



}