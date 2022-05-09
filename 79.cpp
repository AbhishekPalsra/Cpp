#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
// int max(int a,int b)
// {
//     return a>b? a: b;
// }
// float max(float a,float b)
// {
//     return a>b? a: b;
// }
// instead of this we use template fucntion which will work for all datatype
template<class t>
t maxx(t a ,t b)
{
    return a>b? a:b;
}

int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      cout<<maxx(2,3)<<endl;
      cout<<maxx(2.3,1.33)<<endl;
      cout<<maxx(2.3f,1.3f)<<endl;
    //   cout<<maxx(2.3f,2.3); 
    // this is wrong all should have same datatype , unable to decide the datatype
      



      return 0;



}