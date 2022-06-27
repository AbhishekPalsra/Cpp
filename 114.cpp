#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
     string s1;
     cin>>s1;
     cout<<s1.length()<<endl; // . operator for calling member function upon the object
     cout<<s1.size()<<endl;
     cout<<s1.capacity()<<endl;
     s1.resize(40); // chnage the capacity of string
     cout<<s1.capacity()<<endl;
     cout<<s1.max_size()<<endl; // gives out the mx possible size one can have
     
     // s1.clear();
     // s1.empty();
     


      return 0;



}