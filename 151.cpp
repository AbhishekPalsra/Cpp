#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
#define n 10
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
//    sort(arr,arr+10);
cout<<"ascedning order"<<endl;
  for(int i=0;i<n-1;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          if(arr[i]>arr[j])
          {
             
              int temp =arr[j];
              arr[j]=arr[i];
              arr[i]=temp;
          }
      }
  }
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<endl;
   }
   cout<<endl;
   cout<<"descending"<<endl;
    for(int i=0;i<n;i++)
      {
          for(int j=i+1;j<n;j++)
          {
              if(arr[i]<arr[j])
              {
              int temp =arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
                }   
          }    


      }
      for(int i=0;i<n;i++)
      {
          cout<<arr[i]<<endl;
      }


      return 0;



}