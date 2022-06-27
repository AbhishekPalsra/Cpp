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
    //   strcpy(str1,str2);

      strncpy(str1,str2,3); // copy 1st 3 char only in str1, other remain same
      cout<<str1;
      



      return 0;



}