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
	cin.ignore();
	while(t--)
	{
	    string s;
	    getline(cin,s);
	    int a=s.find("010");
        int b=s.find("101");
        if(a>=0 && a<s.length())
    {
        cout<<"Good"<<endl;
            }
            else if(b>=0 && b<s.length())
{
    cout<<"Good"<<endl;
}	    
else{
    cout<<"Bad"<<endl;
}
	}
	return 0;
}
