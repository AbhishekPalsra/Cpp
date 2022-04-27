#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      // var -- data var or adress variable
      // adreess var points to data var
      int x=11;
      int y=18;
      int *p,*e;
       p=&x; // p is having adress of x in memoery;
       e=&y;
       // p and e are also in stack moenory allocted diff adress but they store other adress in it
       cout<<p;
       cout<<endl;
       cout<<e;
       cout<<endl;
       cout<<&x; 
       cout<<endl;
       cout<<&y;


      return 0;



}