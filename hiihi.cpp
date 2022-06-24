#include<bits/stdc++.h>
using namespace std;
bool answer(int a,int b)
{
	bool ans=false;
    for(int i=1;a<=b;i++)
    {
        if(a==b)
    	{
    		ans=true;
    		return ans;
    	}
    	if(i%2==0)
    	{
    		i+=2;
    	}
    	else
    	{
    		i+=1;
    	}

    	

    }
    return ans;
	
	
}
int main() 
{ 
   int t;
   cin>>t;
   while(t--)
   {
    
     int a,b;
     cin>>a>>b;
     if(answer(a,b))
     {
     	cout<<"yes"<<endl;
     }
     else
     {
     	cout<<"no"<<endl;
     }
   }
   

  	return 0;




}