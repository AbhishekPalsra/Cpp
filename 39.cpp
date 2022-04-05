#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

int a[]={1,5,9,10,40,90,10};
int sum=0;
for(int x:a) // a is assigned to x
{
    sum+=x;
    

}
cout<<sum;


      return 0;



}