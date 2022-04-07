#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      
      for(int i=0;i<4;i++) // colums
      {
          for(int j=0;j<4;j++) // rows
          {
              if(i>=j)
              {
                  cout<<" *";
              }

              
          }
          cout<<endl;
      }
      cout<<endl;
      for(int i=0;i<4;i++) // colums
      {
          for(int j=0;j<4;j++) // rows
          {
              if(i<=j)
              {
                  cout<<" *";
              }

              
          }
          cout<<endl;
      }
      cout<<endl;
      for(int i=0;i<4;i++) // column
      {
          for(int j=0;j<4;j++) //  row
          {
              
          }
      }


      return 0;



}