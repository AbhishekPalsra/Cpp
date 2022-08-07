#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

 string str1="hello";
 string str2="world";
 str1.swap(str2);
 cout<<str1<<endl;
 cout<<str2<<endl;


return 0;
}