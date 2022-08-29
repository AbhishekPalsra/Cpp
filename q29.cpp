#include <iostream>
using namespace std;

int main() {
	// your code goes 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
   #endif

	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n-1];

	    for(int i=0;i<n-1;i++)
{
    cin>>arr[i];
}

int time=2*arr[0];
int timeDelay=0;
     for(int j=1;j<n-1;j++)
     {
         timeDelay+=(arr[j]-arr[j-1]);
         if(timeDelay>0)
         {
             time+=timeDelay;
             timeDelay=0;
            
         }
         time+=arr[j];
       
         
     }
     
     cout<<time<<endl;

	}
	
	
	return 0;
}
