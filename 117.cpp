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
  cout<<s1.capacity()<<endl;
  s1.append("how are you bhiajijiji kese ho tum bye");  // may store in s1 or create a new array s1 to  store.. may increase size or maybe notn
  cout<<s1.capacity()<<endl;
  cout<<s1;




      return 0;



}