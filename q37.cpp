#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int max_freq=0;
	      int temp=arr[0];
	      int count=0;
	    for(int i=0;i<n;i++)
	    {
	      
	        if(arr[i]==temp)
	        {
	            count++;
	        }
	        else if(arr[i]!=temp)
	        {
	            max_freq=count;
	            count=1;
	            temp=arr[i];
	        }
	        if(count>max_freq)
	        {
	            max_freq=count;
	        }
	       
	        
	    }
        cout<<max_freq<<endl;
    //    if(count>(n+1)/2)
    //    {
    //        cout<<"no"<<endl;
    //    }
    //    else
    //    {
    //        cout<<"yes"<<endl;
    //    }
	}
	return 0;
}
