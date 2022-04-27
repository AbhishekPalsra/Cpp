#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int fun(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n-2;i++)
    {
        if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2])
        {
            int num =arr[i];
            return num;
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
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }


    sort(arr,arr+n);
    
    int x=fun(arr,n);
    cout<<x<<endl;



  

   
 





}
  

      return 0;



}