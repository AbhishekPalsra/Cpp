#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
// call by value is used in returning something
void swap(int a,int b) // formal parameters
{
    cout<<a<<" "<<b<<endl;
    
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
    
}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int a=20; // actual parameter
      int b=10;
      swap(a,b); // copy of a ,b is passed 
       cout<<a<<" "<<b<<endl;



      return 0;



}