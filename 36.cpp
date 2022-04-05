#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

      float a[]={2.6f,3.5f,66,3};
      for(int x:a) // x is assigmed to vlaue of arr element one by one
      {
          cout<<x<<endl;

      } // this will truncate the decimal
      for(float x:a)
      {
          cout<<x<<endl;

      }
      for(auto x:a) // auto will decide acc to array declarartion itself
      {
          cout<<x<<endl;
      }
      


      return 0;



}
