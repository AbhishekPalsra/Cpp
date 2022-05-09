#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      float n;
      cin>>n;
      int integer=(int)n;
      float decimal= n-integer;
      char bin[64]; // for 64 bit system
      int i=0;
      while(integer)
      {
         

         
          
          


          integer/=2;
          i++;
      }

      



      return 0;



}