#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
long long int fac(long long int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*fac(n-1);
} 
long long int ncr(long long int n,long long int r)

{
    
    return  fac(n)/(fac(r)*fac(n-r));
    


}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      
cout<<ncr(4,1);


      return 0;



}