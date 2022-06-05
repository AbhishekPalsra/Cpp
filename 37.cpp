#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      char arr[]={'A','B',66,67};
      // asci codes are coverted to char
      //for each x in arr
      for(auto x:arr)
      cout<<++x<<endl;
      //x is getting a copy of elements of array so x is changed but array elemment is not chnaged



      return 0;



}