#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
class test
{
    int a;
    int *p;
    public:
    test(int x)
    {
        a=x;
        p=new int[a];

    }
    test(test &t) //  deep copy constructor
    {
        a=t.a;
       //  p=t.p; 
       p= new int[a];
    }
};
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
   // problem with copy constructor 
   
     test t(5);
     test t2(t); //
     // in copy constructor using pointer (dynamic memory allocation) both will point to the same array which we dont want


      return 0;



}