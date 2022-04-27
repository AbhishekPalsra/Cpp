#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
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
   int one=0;
   int minusOne=0;

   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
      if(arr[i]==1)
      {
          one++;
      }
      else
      {
          minusOne++;
      }

   }
   if(one-minusOne<=2 && one-minusOne>=-2) // |x|<=2
{
   
   cout<<"yes"<<endl;



}
// 689
else{
    cout<<"no"<<endl;
}

  
   


    





}

      return 0;



}