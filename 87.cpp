#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int * fun()
{
    int *p=new int[5];
    for(int i=0;i<5;i++)
    {
        p[i]=5*i;

    }
    cout<<p<<endl;
    return p;
}
int main()
{
    // heap memory is global to progemmes
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int *q=fun(); // sharing adress of heap memory to the main function 
      cout<<q<<endl;
      for(int i=0;i<5;i++)
      {
          cout<<q[i]<<endl;
      }



      return 0;



}