#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
  void swap(int &a,int &b)
      {
          cout<<a<<" "<<b<<endl;
          cout<<&a<<" "<<&b<<endl;

          int temp=a;
          a=b;
          b=temp;
      cout<<a<<" "<<b<<endl;
      // dont use complex function inside it for while IT WILL BEHAVE AS SIMPLE FUNCTION THEN

      }
      
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int x=1;
      int y=2;
      cout<<x<<" "<<y<<endl;
      cout<<&x<<" "<<&y<<endl;
      swap(x,y);
      cout<<x<<" "<<y<<endl;
    



      return 0;



}