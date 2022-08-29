#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
    int t;
	cin>>t;
	while(t--)
	{
	    int arr[6];
	    for(int i=0;i<6;i++)
	    {
	        cin>>arr[i];
	    }
	   sort(arr,arr+2);
	   sort(arr+2,arr+4);
	   sort(arr+4,arr+6);
       for(int i=0;i<6;i++)
       {
           cout<<arr[i];
       }
       cout<<endl;

    }
      return 0;



}