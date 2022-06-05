#include<iostream>
#include<bits/stdc++.h>
using namespace std;  


int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,90,933,57}};
     // left most dimension can be left empty ! other cannot [][2][3]
      int key;
      cin>>key;
       int max =INT_MIN;
       for(auto& x:arr)
    {
        for(auto& y:x)
        {
            if(y>max)
            max=y;
        }


    }
    cout<<max;
      
      
      
      


 

      return 0;



}