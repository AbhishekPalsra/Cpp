#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int arr[2][3];
      for(auto& x:arr)
      {
          for(auto& y: x)
          {
              cin>>y;
          }
      }
        for(auto& x:arr)
      {
          for(auto& y: x)
          {
              cout<<y;
          }
          cout<<endl;
      }
      

      
      return 0;



}