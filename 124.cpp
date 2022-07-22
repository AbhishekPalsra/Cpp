#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
  string str="how are you";
  cout<<str.find("are"); // return index of 1st element foud;
  cout<<str.find('o'); // from leftt side find char
  cout<<str.rfind('o') ;// from right sidwe return index
  // if element is not there it return index out of bounda


 




return 0;
}