#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
 string str="programming";
 string str1="hi";
 cout<<str.substr(3)<<endl;
 cout<<str.substr(1,2)<<endl; //  str from 3,3+2 index

cout<<str.compare(str1)<<endl;


return 0;
}