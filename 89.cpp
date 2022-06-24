#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int g=0; // global variable can be accesed anywhere .. remain as long as program is running
// memory is allocated in the code section only
void fun()
{
    int a=5; // local variable remain in memory as long as function is rtunning
    g=g+a;
    cout<<g<<endl;

}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
   g=15;
   fun();
   g++;
   cout<<g<<endl;


      return 0;



}