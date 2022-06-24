#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int fun(int x,int y) // this will be in another section of stack and all var x,y,z will be flushed in the end of fun execution
{
    int z=x+y;
    return z;


}
int main() // another section
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int a=12;
      int b=13;
      int c=fun(a,b); // copy of a and b is passed to fun  in form of x and y
      cout<<c;
      



      return 0;



}