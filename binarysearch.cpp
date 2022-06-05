#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int binarySearch(int arr[],int n,int key) 
{

    int l=0;
    int h=n-1;
    // find wether array is sorted in ascending or descing order
    bool isAsc = arr[l]<arr[h];
    // if(arr[l]<arr[h])
    // isAsc=true;
    // else
    // isAsc=false; 

    while(l<=h)
    { // find middle element
     //  int mid=(l+h)/2; // might be possible tht start + end show overflow  
      int mid= l+ (h-l)/2 ;
      if(arr[mid]==key)
      {
      return mid;
      }
      else if(isAsc) // ascending
      {
          if(arr[mid]>key)
          {
              h=mid-1;

          }
          else
          {
              l=mid+1;
          }
      }
      else // descending
      {
          if(arr[mid]>key)
          {
              l=mid+1;
          }
          else
          {
              h=mid-1;
          }
      }


     
     

    } 
    return -1;

}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int arr[]={6,5,4,3,2,1,-1,-6,-7}; 
   
      int key;
      cin>>key;
      int n=sizeof(arr)/sizeof(arr[0]);
      cout<<binarySearch(arr,n,key);




      return 0;



}