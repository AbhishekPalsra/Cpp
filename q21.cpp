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
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int t;
      cin>>t;
      while(t--)
      {
          long long int y=0;
          cin>>y;
          long long int r=2;
          cout<< ncr(y,r);
             
     
      

      }    


      return 0;



}