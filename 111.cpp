#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      char s1[]="23.5"; // string but there is a number in it--- these function extract number from string
      char s2[]="0100101"; 
       long int x=strtol(s2,NULL,2); // null is imp , 10,2 represent number sysytem base
       float y=strtof(s1,NULL);
       cout<<x<<" "<<y<<endl;




      return 0;



}