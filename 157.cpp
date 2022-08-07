#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int arr[10];
      for(int i=0;i<10;i++)
      {
          cin>>arr[i];

      }

      sort(arr+1,arr+10);
      for(int i=0;i<10;i++)
      {
          cout<<arr[i]<<endl;
      }


      return 0;



}