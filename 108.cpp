
#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      char s1[]="hello";
      char s2[]="ll";
    //   char s3[]="k"; causes runtime error
      cout<<strstr(s1,s2)<<endl;
    //   cout<<strstr(s1,s3)<<endl;



      return 0;



}