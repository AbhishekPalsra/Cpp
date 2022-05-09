#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
// int max(int a,int b,int c)
// {
//     return a>b && a>c? a: b>c?b:c; // turnary can be used as if else block
// }
// default arguments
int max(int a=INT_MIN,int b=INT_MIN,int c=INT_MIN)
// deault aggument is filled from left hand side without skipping 

{
    return a>b && a>c ? a : b>c?b: c;

}
// this can be used for even for 1/2 numbers 3rd is already int min so gud
 
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
       // single fun is acting as 4 diff functions
         cout<<max()<<endl;
         cout<<max(3)<<endl;
         cout<<max(-2,-90)<<endl;
         cout<<max(2,78,8)<<endl;

      return 0;



}