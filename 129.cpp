#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
     string s="helloshdj";
     string::iterator i; 
    // point i to first element of str
    // 
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i; // must derefrence pointer to get the output
    }
    cout<<endl;
    // changes cases of string
    for(i=s.begin();i!=s.end();i++)
    {
        *i=*i-32;
    }
    cout<<s<<endl;
    string:: reverse_iterator j;
    for(j=s.rbegin();j!=s.rend();j++)

    {
        cout<<*j;

    }











return 0;
      }