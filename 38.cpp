#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
     int arr[]={1,2,555,66,77};
     for(int &x:arr)
     {
         cout<<++x<<endl;
         
     }
     cout<<arr[2]; // the value of arr elemtnts is acc changed as we used adress

//loops work upon collecction on values! it will not depned on pointers

      return 0;



}