#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int count=0;
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
              cout<<count++<<" ";
          }
          cout<<endl;
      }



      return 0;



}