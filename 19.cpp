#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
     int age;
     cin>>age;
     if(age>=12 ,age<=50) // it check statment after comma
     {
         cout<<"young";

     }
     else
     {
         cout<<"old";
     }


      return 0;



}