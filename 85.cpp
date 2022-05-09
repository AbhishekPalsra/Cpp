#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int * fun(int size)
{
    int *p=new int[size];
    for(int i=0;i<size;i++)
    {
        p[i]=i+1;
    }
    return p;
}

int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      // functions can also return adressses same as returning variable
     int *ptr=fun(5);
     



      return 0;



}