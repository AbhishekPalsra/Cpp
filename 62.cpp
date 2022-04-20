#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    // var are declared in stack
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
     int a[5]={1,2,3,4,5}; // crreated in stack
     int *b;
     b=new int[5]; // created in heap // new imp 
     // new var in heap are not deleted until complete executtion you should delocate it urself
    


 // DELETE FIRST
    delete []b; // THIS WILL DELETE
    b=NULL; // POINTER WILL NOT BE POINTING TOWARD ARR IN HEAP
     cout<<a[0]<<endl; 
     cout<<a<<endl; //a repesent adress of a[0]
     cout<<&(a[0])<<endl;
      return 0;



}