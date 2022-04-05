#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
int n;
cin>>n;
int fac=1;
for(int i=1;i<n+1;i++)
{
    fac*=i;

}
cout<<fac; //rrecursion fast


      return 0;



}