#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      //dynamic array using heaps
      int size;
      cin>>size;
      int *p;
      p=new int[size];
      delete []p; // this is imp otherwise it wil leak to meomory leak
      cout<<"enter new size";
      cin>>size;
      p=new int[size]; // same array of new size will be created


      return 0;



}