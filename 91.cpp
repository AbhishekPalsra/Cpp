#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
// look for the nearest scope
void fun()
{
    int g=10;
    {
        int g=0;
        g++; // local g=0 will increment 
        cout<<g<<endl;
       // g is created and destroyed
    }
    cout<<g<<endl;


}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
     fun();


      return 0;



}