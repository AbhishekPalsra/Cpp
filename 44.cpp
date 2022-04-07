#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
     // nested for loop
     for(int i=1;i<=5;i++)
     {
         for(int j=1;j<=5;j++)
         {
             cout<<i<<" "<<j<<" ";
         }
         cout<<endl;


     }


      return 0;



}