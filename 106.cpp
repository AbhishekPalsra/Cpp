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
     char str2[]="world";
     cout<<strcat(str1,str2)<<endl;

     cout<<strncat(str1,str2,3); // strncat(str1,str2,no of elememnt from string 2)
     


      return 0;



}