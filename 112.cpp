#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
     char s1[20]="x=10;y=20;z=35";
     // web progararming used
    //  cout<<strtok(s1,"=;"); // 1st token only 
    //tokens are x 10 y 20 z 35

    char* token=strtok(s1,";="); // 1st token 
    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,";="); // null for same string // upon the symbol inside " " tokenising will be done
    }
    

      return 0;



}