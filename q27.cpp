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
      cin.ignore();
      while(t--)
      {
          string s;
          getline(cin,s); // no problem of unnecssary characters
           int i=s.length()-1;
        
         while(!isspace(s[i]))
         {
            i--;
         }
         int z=i+1;
         for(z;z<s.length();z++)
         {
             cout<<s[z];
         }
         cout<<endl;

          
          
           
      }



      return 0;



}