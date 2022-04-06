#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      //binary search : tht book example O(logn)
      // sorted array
      //binary search is faster
      int arr[]={1,3,54,77,88,99,100,101,107,110};
      int l=0,h=9;
      int key,mid;
      cin>>key;
      while(l<=h)
      {
          mid=(l+h)/2 ;// trunctaed value
          if(arr[mid]==key)
         {
              cout<<"found @"<<mid<<endl;
              return 0; // this will end the entire program here only if tthis statement is executed

          }
          else if(arr[mid]>key)
          {
              h=mid-1;
          }
          else{
              l=mid+1;
          }
      }
      cout<<"not found"<<endl;





      return 0;



}