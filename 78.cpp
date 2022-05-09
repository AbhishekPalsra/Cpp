#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
  int sum(int a,int b,int c)
      {
            return a+b+c;

      }
      int sum (int a ,int b)
      {
            return a+b;

      }
      float sum(float a,float b) // while entering we should write 2.3f otherwise it will throw up error
      {
            return a+b;
      }
      // both are diff fun with the same name
      // we cannt redefine the same sum
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
// function overloading
//we can have diff fun with the same name........but diff input standards
 
 // return type is never considered
 
 int a=10,b=230,c=34;

    int x= sum(a,b,c);
    cout<<x<<endl;
    x=sum(a,b);
    cout<<x<<endl;
    float e=2.3f;
    float f=23.4f;
    float y=sum(e,f);
    cout<<y<<endl;
      return 0;



}