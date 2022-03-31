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
      int n;
      while(t--)
      {
          int x,y;
          cin>>x>>y;
          int c;
          float d= sqrt(x*x + y*y);
          int e= sqrt(x*x + y*y);
          if(d==0)
          {
              c=0;
          }
          else if(d==e)
          {
              c=1;
              
          }
          else
          {
              c=2; // min move one can take to reach
          }



          cout<<c<<endl;
             






     }







          

 

          





      



      return 0;


}