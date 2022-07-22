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
str.replace(3,4,"KK"); // replaces from index 3 to 3+4
cout<<str<<endl;
str.push_back('z'); // only char can be insterted
cout<<str<<endl;
str.pop_back();
cout<<str;




    return 0;
}