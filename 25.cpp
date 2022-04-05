#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
     float billAmount;
     float discount=0.0;

       cout<<"enter bill amount"<<endl;
       cin>>billAmount;
       if(billAmount>=500)
       {
         discount=billAmount*0.2;
       }
       else
       {
           discount=billAmount*0.1;
       }
       cout<<discount;
     
       
      return 0;



}