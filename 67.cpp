#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
int a[]={1,23,4,67,7,7};
int *p=a;
cout<<p<<endl;
cout<<*p<<endl;
p++; // will move to next location as it is int pointer it moves by 4
cout<<p<<endl;
cout<<*p<<endl;
p=p+2; // move by 2 elemnts
cout<<p<<endl;
cout<<*p<<endl;
p++;
int *q;
q=&a[3];
int d=q-p; // &q-&p/size of datatype 4
// with this you can know which element is front & behind
cout<<d;




      return 0;



}