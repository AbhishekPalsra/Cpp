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
      char x=127; // max value a character can store

      cout<<(int)x <<endl;
      char y=x++; // x value is 1st tsored in y  then incremented
      cout<<(int)y<<endl; 
      cout<<(int)x<<endl; //in case of overflow it will take cylic result
       x++;
       cout<<(int)x<<endl;





      return 0;


}