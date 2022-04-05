#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

int arr[]={1,5,54,232,3,7654,54};
int lar=arr[0];
for(int i;i<7;i++)
{
    if(arr[i]>lar)
    {
        lar=arr[i];
    }
    
}
cout<<lar<<endl;
lar=arr[0];
for(int x:arr)
{
    if(x>lar)
    {
        lar=x;
    }

}
cout<<lar<<endl;



      return 0;



}