#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif  
      // array in heap
      int *p=new int[20];
    //  p[i]; can print from 0 to 19
    delete []p; // imp otwerise it will lead to memory leak
      p=new int[12]; // can print form 0 12
   //   p[i]

      return 0;



}