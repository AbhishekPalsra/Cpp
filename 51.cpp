#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int a[2][3];
      for(auto& x:a)  //  variables of type row of A
      //for using for loop in multi arr we pass adrress
      {
          for(auto& y:x) // variable of type column of A
          {
              cin>>y;

          }
         
      } 
     
      for(auto& x:a)
      {
          for(auto& y:x)
          {
              cout<<y<<" ";

          }
          cout<<endl;
      } 



      return 0;



}