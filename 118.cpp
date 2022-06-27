#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      string s1="hello";
      s1.insert(3,"kk");
      cout<<s1<<endl;
      string s2="abhishek";
      s2.insert(7,"anuska",3); // 3 char from insert string will add at index 8
      cout<<s2<<endl;




      return 0;



}