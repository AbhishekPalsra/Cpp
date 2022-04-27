#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

        float x[3];
        float y[3];
         for(int i=0;i<3;i++)
        {
            cin>>x[i];
            cin>>y[i];
        } 
        for(int i=0;i<3;i++)
        {
            cout<<x[i]<<" "<<y[i]<<endl;
        }
        float difX=x[1]-x[0];
        float difY=y[1]-y[0];
        int d=sqrt(pow(difX,2)+pow(difY,2));
        cout<<d;
        
        
        

      return 0;



}