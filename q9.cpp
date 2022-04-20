#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;

        char str[n + 1];
        str[n] = '\0';
        int p=b;  //paired // no of spaces b+1;
        int u=r-b; // unrapired //


        for (int i = 0; i < n; i++)
        {
           if(r-b==1)
           {
               if(i%2==0)
               {
                   str[i]='R';
               }
               else
               {
                   str[i]='B';
               }
           }
           else
           {


           }
    
        }
        while()
        for(int i=0;i<n;i++)
        {
            cout<<str[i];
        }
        cout<<endl;
     
        

      
    }
      return 0;
}
