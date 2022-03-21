#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int l,b;
      // typecasting
      cin>>l>>b;
      float a;
      a= (float)l*b/2; //right way
       // here we typecaste l*b/2 into a float before performing ac calculations
     float u= float(l*b/2) ; // wrong way to typecast

       
            cout<<a<<endl;
       cout<<u<<endl;


      return 0;


}