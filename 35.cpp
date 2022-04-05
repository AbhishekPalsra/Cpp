#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      // for each loop for array
      int A[5]={1,8,7,0,5};
      for(int x:A) // this wil work acc to the physicla size of array
      {
          cout<<x<<endl;
      }



      return 0;



}