#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
// refrence
     int x=10;
     int &y=x; // x is l value of x which is adress// y is a reference == nick name of x
     // both x and y are same 
     // diff is x occupy a space in memory whereas y doesnt 
     // ref doesnt consume any memory at all
     // y cannot act as ref for any other var now!
     int z=10;
     int a=z; // z here is a data of z << z is r value
   /* z here is adress of << z is l value*/ z=25; 

      return 0;



}