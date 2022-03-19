#include<iostream>
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string>
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
           string str;
           cin>>str;
           int i=0;
           int count=0;
            char var='1';
           while(str[i]!='\0') //10011
           {
             
              if(str[i]==var) // 1=1 
              {

              }
              else
              {
                  count++;
                  if(var=='1')
                  {
                      var='0';
                  }
                  else
                  {
                      var='1';
                  }
                  
                  

              }
              i++;
            





           
           }
            cout<<count<<endl;


      }
     




      return 0;


}