#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
#define n 10
void swap(int *p,int *q)
{
   // swap is fast using pointers
    int temp=*p;
    *p=*q;
    *q=temp;
}
void selectionSort(int arr[],int k)
{
   int i,j;
   for(i=0;i<k-1;i++)
   {
       for(j=i+1;j<k;j++)
       {
           if(arr[i]>arr[j])
           {
               swap(&arr[i],&arr[j]);
               
           }
       }

   }

}

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
      selectionSort(arr,n);
      for(int i=0;i<n;i++)
      {
          cout<<arr[i]<<endl;  
    }





      return 0;



}