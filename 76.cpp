#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int maxx(int x,int y,int z)
{
   if(x>y && x>z)
   {
       return x;
   }
   else if(y>z)
   {
       return y;
   }
   else
   {
       return z;
   }


}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int a,b,c;
      cin>>a>>b>>c;
      int max=maxx(a,b,c);
      cout<<max;


      return 0;



}