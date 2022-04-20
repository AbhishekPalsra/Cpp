#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
int a[5]={1,2,34,5,6};
int *p=a;
for(int i=0;i<5;i++)
{
    cout<<a[i]<<" "<<i[a]<<endl;
    cout<<*(a+i)<<" "<<a+i<<endl;
    cout<<p<<endl;  /// p print adress
    p++;
    
    


}
int *q=&a[2];
int t=p-q;
cout<<t;


      return 0;



}