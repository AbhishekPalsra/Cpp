#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      
     int a,b;
     cin>>a>>b;
     int c=a;
     a=b;
     b=c;

     a=a+b;
    b=a-b;// a+b-b // b=a
    a=a-b; // a+b-a // a=b
       
    //  a=a*b; // a==a*b
    //  b=a/b; // b==a
    //  a=a/b; // a==b
    //    cout<<a<<" "<<b;

    a=pow(a,b); //a==a^b;
    b=pow(a,b); //b==a^b*2
    a= pow(a,b);// a==b



    




    

 






      return 0;
    



}