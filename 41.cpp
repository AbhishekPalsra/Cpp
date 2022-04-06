#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int arr[10]; // not intilaised
      for(int i=0;i<10;i++)
      {
          cin>>arr[i];
      }
      int key;
      cin>>key;
      for(int i=0;i<10;i++)
      {
          if(key==arr[i])
          {
              cout<<"key found @ "<<i;

          }
      }



      return 0;



}