#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,n,r;
	    cin>>x>>y>>n>>r; // x cost normal y cost super n totoal burger r amount
	   // nb=r/x pb=r/y
	   if(r/x<n)
	   {
	       cout<<"-1"<<endl;
	   }
	   else if(r/y>=n)
	   { 
	      cout<<"0"<<" "<<n<<endl;
	   }
	   else
	   {
	       // money left = r-nx .. if only nb 
	       int i=1;
	       while(r-(n*x)+(i*x)-(i*y) || i<=n)
	       {
	           i++;
	           
	           
	       }
	       cout<<n-i<<" "<<i<<endl;
	   }
	        
	       
	    

	    
	}
	
	return 0;
}
