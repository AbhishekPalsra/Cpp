#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
 string s="cgSBKjDHJfbnbch"; //A=65 a=97
 string::iterator i;
 // fast access the elements
//  for(i=s.begin();i!=s.end();i++)
//  {
//      *i=*i-32;

//  }
for(i=s.begin();i!=s.end();i++)
{
    if(*i>=65 && *i<=90) // cap case
    {
       *i=*i+32; // cap to small

    }
    else // small to cap
    {
         *i=*i-32;
    }


}
 cout<<s;







return 0;
}