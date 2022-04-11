#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

    int arr[9];
    float sum=0.0f;

    for(auto x:arr)
    {
        cin>>x;     // 45/9
        sum+=x;


    }
    cout<<sum/9.0;

      return 0;



}