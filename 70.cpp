#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
  int arr[5]={1,2,3,4,5};
  int *p=arr; // adress of 1st 
  cout<<p<<endl;
  for(int i=0;i<5;i++)
  {
      cout<<*p<<endl;
      p++;
  }
cout<<p<<endl;


      return 0;



}