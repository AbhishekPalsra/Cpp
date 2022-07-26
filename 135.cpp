#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

    string str="malayalam";
    string rev="";
    int length=str.length();
    rev.resize(length);
    for(int i=0,j=length-1;i<length;i++,j--)

    {
        rev[i]=str[j];

    }
    rev[length]='\0';
    cout<<rev<<endl;
    cout<<str.compare(rev);
    
      return 0;



}