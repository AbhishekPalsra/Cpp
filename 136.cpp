#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif


      string email= "abhipahidfglsra@gmail.com";
      int index=email.find('@');
      cout<<index<<endl;
      string username=email.substr(0,index);
      cout<<username<<endl;
      
      






      return 0;



}