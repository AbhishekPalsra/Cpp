
#include<iostream>
#include<bits/stdc++.h>

using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      string str;
      cout<<"May i know your name?"<<endl;
      // for multiword name use getline(cin,strname) it stops when enter is pressed it reads an entire line
      getline(cin,str);
      cout<<"Welocme "<<str<<endl;




      return 0;


}