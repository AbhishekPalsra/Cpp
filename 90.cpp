#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int g=5;
void fun()
{
    int g=10;
    cout<<g<<endl;
    g++; //look for nearest scope
    cout<<g<<endl;
}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

     cout<<g<<endl;
     fun();
     cout<<g<<endl;


      return 0;



}
