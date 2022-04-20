#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

int *p=new int[5];  // array of size 5 is created in heap
 p[0]=12;
 p[1]=13;
 // heap memory must be de allocated
 // 
 // value will remain in heap for all time // memory leak
 // its good to do next 2 step to dealloctae
 // p=NULL; // WE CANNOT DEALLOCATE LIKE THIS
 //  delete []p;  
//   p=NULL;
 cout<<p[1]<<endl;

 p=NULL;
      return 0;



}