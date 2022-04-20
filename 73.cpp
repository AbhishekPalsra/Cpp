#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int x=10;
      //int &y; // wrong
      // a refrence must be initilalised when its declared
      int &y=x; // x and y are same x is l value adress
      y++;
      x++;
      cout<<x<<" "<<y<<endl;
        cout<<&x<<" "<<&y<<endl;




      return 0;



}