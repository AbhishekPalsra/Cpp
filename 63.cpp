#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
// dynamic array 
int *p=new int[5];  // array of size 5 is created in heap
// p cane be seen as a array
 p[0]=12;
 p[1]=13;
 // heap memory must be deallocated
 // 
 // value will remain in heap for all time // memory leak
 // its good to do next 2 step to dealloctae
 // p=NULL; // WE CANNOT DEALLOCATE LIKE THIS
 //  delete []p;  
//   p=NULL;
 cout<<p[1]<<endl;

 p=nullptr;
      return 0;



}