#include<iostream>
// basic calculator program
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
     cout<<"Menu"<<endl;
     cout<<"1. Add"<<endl<<"2. Sub"<<endl<<"3. Mul"<<endl<<"4. Div"<<endl;
     int option;
     cout<<"enter your choice"<<endl;
     cin>>option;
     int a,b;
     float c;
     cout<<"enter two numbers"<<endl;
     cin>>a>>b;
     switch (option)
     {
       case 1:c=a+b;
       break;
       case 2: c=a-b;
       break;
       case 3: c=a*b;
       break;
       case 4: c=(float)a/b;
       break;
       default:cout<<"Wrong input";
       break;

     }
     cout<<c<<endl;



      return 0;



}