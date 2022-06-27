#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

    char str[]="hello";
    cout<<strlen(str); // work only of characteer array not on string class
    char st[]="heelo world";
    cout<<strlen(st)<<endl;


      return 0;



}