#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int day;
      cout<<"enter your day"<<endl;
      cin>>day;
      switch(day)
      {
          case 0: cout<<"Monday"; // after every case break is must
          //there must be a space bw case and case number
          break;
          case 1: cout<<"Tuesday"; 
          break;
          case 2: cout<<"Wednesday";
          break;
          case 3: cout<<"Thursday";
          break;

          default : cout<<"invalid day"; //for other output than 0 1 2 3...this will be executed
          break;
          /// defualt can be present anywhere in the switch block
          // defualt block can be placed anywhere inside the switch 
          //switch statment is faster than multiple if else..
      }





      return 0;



}