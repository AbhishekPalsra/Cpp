#include <iostream>
using namespace std;

int main() {
	// your code goes here
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
	    int testCases[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>testCases[i];
	    }
	    cin.ignore();
	    string v;
	    getline(cin,v);
	    int min=INT32_MAX; // 32bit
	    for(int i=0;i<n;i++)
	    {
	        if(v[i]=='0')
	        {
	           if(testCases[i]<min)
	           {
	               min=testCases[i];
	           }
	        }
	    }
	    cout<<min<<endl;
	    
	    
	    
	    
	    
	    
	    
	}
	return 0;
}
