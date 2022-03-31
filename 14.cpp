#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
       int x=11; // 00001011
       int y=7; //  00000101
       int z;    // 00000001
       int a;    // 00001111 
       int b;    // 00001110
       z= x&y;   // and operator
       a=x|y;    // or operator
       b=x^y;   // xor operation (if both diff then 1 otherwise 0)
       cout<<z<<endl<<a<<endl<<b;
       

 

      return 0;


}