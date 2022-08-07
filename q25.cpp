#include <iostream>
using namespace std;
int counter(int n)
{
   int count=0;
   if(n==0)
   {
	   return count;
   }
   if(n==1)
		 {
			count=count+2;
			n=0;
		 }
		if(n==2)
		 {
			 count=count+1;
			 n=0;
		 }
		  if(n==4)
		 {
			 count=count+2;
			 n=0;
		 }
		 else
		 {
			 n=n/3;
			 count=count+n/3;
		 }
}
int main() {
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
	
	 
		
	 
	  cout<<count<<endl;
	    
	}
	
	return 0;
}
