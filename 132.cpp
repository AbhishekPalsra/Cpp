#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
// a e i o u A E I O U
string s="how many words";

int vowels=0,cons=0,spaces=0;
 for(int i=0;i<s.length();i++)
 {
     if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' || s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
     {
       vowels++;
     }
     else if(s[i]==' ')
     {
         spaces++;
     }
     else
     {
         cons++;
     }
     

 }
 cout<<vowels<<" "<<cons<<" "<<spaces;
 // no of words = space+1 ... if only space bw words




}