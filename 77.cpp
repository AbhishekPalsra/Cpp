#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
float poww(float x,float y)
{
    int k=1;
 while(y!=0)
 {
     k=x*k;







     y--;


 }
 return k;
}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      cout<<poww(2,5);



      return 0;



}