#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif


      string email= "abhipalsra@gmail.com";
      int index=email.find('@');
      string username=email.substr(0,10);
      cout<<username<<endl;
      
      






      return 0;



}