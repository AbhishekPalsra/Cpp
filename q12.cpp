#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

     int t;
     cin>>t;
     while(t--)
     {
         int d;
         cin>>d;
int x;
         if(d>=1900)
         {
             x=1;
             

         }
         else if(d>=1600)
         {
           x=2;
         }
         else if(d>=1400)
         {
                 x=3;
         }
         else
         {
           x=4;
         }
         cout<<"Division"<<" "<<x<<endl;
     }


      return 0;



}