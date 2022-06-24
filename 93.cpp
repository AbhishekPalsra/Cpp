#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int v=0; // created in code section and can be acceed by all ..remain throughout
void fun()
{
    int a=5;
    v++;
    a++;
    cout<<a<<" "<<v<<endl;


}

int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      fun();
      fun();
      fun();



      return 0;



}