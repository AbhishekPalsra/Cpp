#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    // pointer have its own adress
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int *p;
      int a=23;
      p=&a;
      cout<<p<<endl;
      cout<<&a<<endl; // adress of a
      cout<<&p<<endl; // adress of p which is diff! p stores adress of a but adress of p is itslef diff
      cout<<*p<<endl; // relocta the address to data .. derefrencing pointers
      cout<<*(&a)<<endl; // defrening adress 
      



      return 0;



}