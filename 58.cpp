#include<iostream>
#include<bits/stdc++.h>
// good
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

       int arr[2][3]={1,2,3,4,5,6}; // 1 2 3 1 2 
                                    // 4 5 6 3 4
                                    //       5 6 
       int arrr[3][2]={1,2,3,4,5,6};//
       int crr[2][2];
       for(int i=0;i<2;i++)
       {
           for(int j=0;j<2;j++)
           {
               crr[i][j]=0;
               for(int x=0;x<3;x++)

               {// multideim arr are just stored as singel dimn in case of adressses
                   crr[i][j]+=arr[i][x]*arrr[x][j];
               }

           }
       }
       for(int i=0;i<2;i++)
       {
           for(int j=0;j<2;j++)
           {
               cout<<crr[i][j]<<" ";
           }
           cout<<endl;
       }


      return 0;



}