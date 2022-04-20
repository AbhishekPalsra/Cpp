#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int arr[2][3]={3,3,5,6,7,8};
      float avg,sum=0;
      for(int i=0;i<2;i++)
      {
          for(int j=0;j<3;j++)
          {
              sum+=arr[i][j];
          }
      }
      cout<<sum/2*3;



      return 0;



}
