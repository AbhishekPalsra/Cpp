#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int ls(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            return i;
        }

    }
    return -1;

}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];

      }
      int key;
      cin>>key;
      ls(arr,n,key);



    


      return 0;



}