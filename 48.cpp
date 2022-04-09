#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      for(int i=0;i<=5;i++)
      {
          for(int j=0;j<=i;j++)
          {
              cout<<"* ";
          }
          cout<<endl;
      }
       cout<<endl;
       for(int i=0;i<=5;i++)
       {
           for(int j=0;j<=5-i;j++)
           {
               cout<<"* ";

           }
           cout<<endl;
       }
       cout<<endl;
       for(int i=0;i<=5;i++)
       {
           for(int j=0;j<=5;j++)
           {
               if(i+j>=5)
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
       cout<<endl;
            for(int i=0;i<=5;i++)
       {
           for(int j=0;j<=5;j++)
           {
               if(i+j<=5)
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
     for(int i=0;i<5;i++)
     {
         for(int j=0;j<5;j++)
         {
             if(j>=i)
             {
                 cout<<i<<" " ;
             }
             else
             {
                 cout<<"  ";
             }
         }
         cout<<endl;
     }
     cout<<endl;

      return 0;



}