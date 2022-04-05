#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      //find gcd of 2 numbers
      int m,n;
      cin>>m>>n;
      while(m!=n)
      {
          if(m>n)
          {
              m=m-n;
          }
          else
          {
              n=n-m;
          }
      }
      cout<<m;


      return 0;



}