#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int binarySearch(int arr[],int n,int key)
{
    if(n==0)
    return -1;
  for(int i=0;i<n;i++)
  {
      if(arr[i]==key)
      return i;
    
  }
  return -1;
}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int key;
      int arr[]={1,2,54,21,54,76,6543,65,655,4545,54};
      cin>>key;
      int n=sizeof(arr)/sizeof(arr[0]);
      cout<<binarySearch(arr,n,key);




      return 0;



}