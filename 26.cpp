#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int n;
      cin>>n;
      
      while(n--)
      {
           cout<<n+1<<endl;
      }
      cin>>n;
      int i=1;
      while(i<=n)
      {
          cout<<i++<<endl;
      }
      do
      {
        cout<<i--<<endl;
      } while (i);
      

      
      


      return 0;



}