#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
void fun()
{
    static int v=0;// run only once  // just  like global vraible ...remain always in the memory....cant be accessed
    v++;
    cout<<v<<endl;

}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      fun();
      fun();
      fun();



      return 0;



}