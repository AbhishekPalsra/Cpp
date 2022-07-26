#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

      string str="Welcomeback hii";
      int count=0;
    //   for(int i=0; str[i]!='\0';i++)
    //   {
    //       count++;
    //   }
    //   cout<<count;
    string::iterator i;
    // i is pointer
    for(i=str.begin();i!=str.end();i++)
    {
        count++;
    }
    cout<<count;
    // str.begin() gives the adress of 1st element to this pointer i
    cout<<*str.begin(); // derefrencing adress


}