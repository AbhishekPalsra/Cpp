#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int a[10]={2,4,5,6,8,12,3,5,7,9};
      int max=INT_MIN; 
      //noice
      //least value one can have ever useful in case of negative numbers
      for(auto x:a)
      {
          if(x>max)
          {
              max=x;
          }
      }
      cout<<"max number"<<max;


      return 0;



}