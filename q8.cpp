#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=9/2;j++)
        {
            if(j+i>=6)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        
        for(int j=9/2 +1;j<=9;j++)
        {
            if(i+5>j)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
                }
            
        }
        cout<<endl;
    
       
        



    }
    



      return 0;



}