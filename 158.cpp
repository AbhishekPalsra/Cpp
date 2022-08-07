#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
// recursive approach
void bubbleSort(int arr[],int n)
{
    if(n==0  ||  n==1)
	{
		return; // return to the main function
	}
	int swapped=false;
	for(int i=0;i<n-1;i++)
	{

		if(arr[i]>arr[i+1])
		{
			swap(arr[i],arr[i+1]);
			swapped=true; 
		}
	}
	if(swapped==false) // if swapping doesnt occur in the first loop then array is already sorted
	{
		return;
	}
	bubbleSort(arr,n-1);

} 
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
	  int n;
	  cin>>n;
      int arr[n];
	  for(int i=0;i<n;i++)
	  {
		  cin>>arr[i];
	  }
	  bubbleSort(arr,n);
	  for(int i=0;i<n;i++)
	  {
		  cout<<arr[i]<<" ";
	  }
	  


      return 0;



}