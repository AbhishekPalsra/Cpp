#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
int t;
cin>>t;
while(t--)
{
    int x;
    cin>>x;
    bool key=false;

    for(int b=1;b<=pow(x,0.5);b++)
    {
             if((x-2*b)%(2+b)==0 && x!=2*b)
             {
                 key=true;
                 break;
             }
    }
    if(key==true)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    
}


      return 0;



}