#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      // 2D array == 2 rows and 3 columns //useful for matrix multiplication
      int arr[2][3]={{2,5,9},{6,4,2}};
      
      int arrr[2][3]={2,5,9,6,4,2}; //rest of value will be intiliased auto to zero 
      // cant use auto here
     for(int i=0;i<2;i++)
     {
         for(int j=0;j<3;j++)
         {
             cout<<arr[i][j]<<" ";
          
         }
         cout<<endl;
     }
     

      return 0;



}