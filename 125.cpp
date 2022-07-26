#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
  string s="hello world";
  cout<<s.find_first_of('l'); // gives index of 1st l;
  cout<<s.find_last_of('l'); // gives index of last l
  cout<<s.find_first_of('l',3); // overloaded functio// gives u index of 1st l starting from index 3;

  cout<<s.find_first_of("leh"); // either l or either e or either h
  // not like find
 
 




return 0;
}