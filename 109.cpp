#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
       char str1[]="hello";
      cout<<strchr(str1,'l')<<endl; // finds charcter similar to strstr
      cout<<strrchr(str1,'l'); // occurnece of char from the right hand side
   // all these fun give error when these are not present

      return 0;



}