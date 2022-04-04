#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    //short circuit concept 
    // careful using increment decreament operator within conditional statements
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
    int a=5,b=7,i=5;
    if(a>b && ++i>b) // here 1st stament is false in itself so it doesnt go to the second statememt so i is not increment
    {   
    
    }
     cout<<i<<endl;

    if(a>b || ++i>b) // here 1st stament is flase but its and or so it check 2nd statment hencee i is incremnted 

    {

    }
    cout<<i;



      return 0;



}