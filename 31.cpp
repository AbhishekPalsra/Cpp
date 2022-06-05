#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
//facctors of n
//perfect num is if sum of its proper divisor=number
int n;
cin>>n;
int sum=0;
for(int i=1;i<=n;i++)
{
    if(n%i==0)// == vs =
    {
        sum+=i;
        cout<<i<<endl;
    }

}
cout<<sum;

      return 0;



}