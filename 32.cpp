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
      int rev=0;
      while(n!=0)
      {
          int c=n%10;
          n/=10;
          cout<<c<<endl;
          rev=rev*10+c;
      }
      cout<<rev<<endl;



      return 0;



}