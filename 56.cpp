#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      // addition of a matrix
      int a[2][3]={{2,3,4},{4,5,3}};
      int b[2][3]={1,2,3,3,4,5};
      for(int i=0;i<2;i++)
      {
          for(int j=0;j<3;j++)
          {
              cout<<a[i][j]+b[i][j]<<" ";
          }
          cout<<endl;
      }



      return 0;



}