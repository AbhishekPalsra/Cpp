#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int * fun()
{
    int x=10;
    return &x; //cannt return address of local variables
    // we can return adress of heap memory
}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif



      return 0;



}