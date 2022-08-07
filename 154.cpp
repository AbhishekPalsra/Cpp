#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
#define n 10
void swap(int *p,int *q)
{
	int temp=*p;
     *p=*q;
	 *q=temp;
}
// you need to declare function before using it in another function

void bubbleeSort(int arr[],int k) 
// send biggest no to the end!
{

	bool swapped;
	for(int i=0;i<k-1;i++)
	{ 
         swapped=false; // if inner loop doesnt performa any swapping then array is already sorted
		for(int j=0;j<k-1-i;j++) // as last elment is already sorted
		{    

			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
				swapped=true;
				
			}
		}
		if(swapped==false)
		{
			break;
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
	  bubbleeSort(arr,n);
	   for(int i=0;i<n;i++)
	  {
		  cout<<arr[i]<<endl;
	  }




      return 0;



}