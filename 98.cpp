#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int max(int x,int y)
{
    return x>y? x:y;
}
int min(int x,int y)
{
    return x>y? y:x;
}

int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int (*fp) (int,int);
      fp=max;
      cout<< (*fp) (10,5)<<endl;
      fp=min;
      cout<< (*fp) (10,5);

    // one function pointer can write on any of the function having the same signature

      return 0;



}