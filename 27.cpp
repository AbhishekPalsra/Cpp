#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
    for(int i=0;i<6;i++)
    {
        cout<<i<<endl;

    }
    int j=1;
    for(;;)
    {
        cout<<j++<<endl; // this will alone run infinte loop
         
         if(j==10) //this will break the near for loop
         {
             break;
         }
    }




      return 0;



}