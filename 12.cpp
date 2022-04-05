#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      // overflow
      // char -128 to 127
      char x=127; // max value a character can store

      cout<<(int)x <<endl;
      char y=x++; // x value is 1st tsored in y  then incremented
      cout<<(int)y<<endl; 
      cout<<(int)x<<endl; //in case of overflow it will take cylic result
       x++;
       cout<<(int)x<<endl;
       // 127     01111111
       //               +1
       //    x    10000000  -ve numbers in c++ are stored in 2's compliment
       //         01111111 
       //               +1
      //          10000000
       // -128






      return 0;


}