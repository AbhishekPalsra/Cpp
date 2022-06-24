#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
// return by reference
int & fun(int &x)
{
    cout<<x<<endl;
    return x; // return refrence of &(&a)
}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int a=10;
      fun(a)=25; // fun(a) acts as l value 
     // a=25;
      cout<<a;
      return 0;



}