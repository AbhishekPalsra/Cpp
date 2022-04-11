#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      //  1 2 3 4 
      // 1       * i=1;j=4
      // 2     * *
      // 3   * * *
      // 4 * * * *

       for(int i=1;i<=5;i++)
       {
           for(int j=1;j<=5;j++)
           {
               if(i+j>5) // 
               {
               cout<<"* ";
               }
               else
               {
               cout<<"  ";
               }
               
           }
           cout<<endl;
       }
          for(int i=2;i<=5;i++)
       {
           for(int j=1;j<=5;j++)
           {
               if(j>=i) // 
               {
               cout<<"* ";
               }
               else
               {
               cout<<"  ";
               }
               
           }
           cout<<endl;
       }
       // * * * * *
       // * * * *
      //  * * *
      //  * *
      //  *

       for(int i=1;i<=5;i++)
       {
           for(int j=1;j<=5;j++)
           {
               if(i+j<=6)
               cout<<"* ";
               else
               cout<<"  ";

           }
           cout<<endl;
       }

      return 0;



}