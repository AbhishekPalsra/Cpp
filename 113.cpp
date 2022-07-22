#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
   // string class in c++
    string str;  //str is a object here
    cin>>str;   // reads single line only
    // will not created exact size array..it will make sure that no of spaces in string is awlasy greeater than no of char stored
    // capacity>length
    // it automatically increase size by deleting previous arrayy and making new arrray
    getline(cin,str); //best
    // no problem on new line character here in string class .. no problem of characters here


      return 0;



}