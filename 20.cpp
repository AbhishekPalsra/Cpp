#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int a,b,c;
      cin>>a>>b>>c;
    //   if(a>b)
    //   {
    //       if(a>c)
    //       {
    //           cout<<a;
    //       }
    //       else

    //       {
    //           cout<<c;

    //       }
    //   }
    //   else //b>=a
    //   {
    //       if(b>c)
    //       {
    //           cout<<b;
    //       }
    //       else
    //       {
    //           cout<<c;
    //       }

    //   }
    if(a>=b && a>=c)
    {
        cout<<a;
    }
    else
    {
        if(b>c)
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }



      return 0;



}