#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
     int a[3][3]={2,3,4,5,6,7,8,9,34};
     int b[3][3]={1,2,34,4,5,7,8,54};
     int c[3][3];
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             c[i][j]=a[i][j]+b[i][j];


         }
         
     }
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             cout<<c[i][j]<<" ";
         }
         cout<<endl;
        
     }



      return 0;



}