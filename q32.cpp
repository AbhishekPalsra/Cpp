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
         int n,k;
         cin>>n>>k;
         string s;
         getline(cin,s);
         for (int i = 0; i < n/2; i++){

    for (int j = 0; j < n/2- 1; j++){
      if (s[j] > s[j + 1]){ 

        int temp = s[j];
        s[j] = s[j + 1];
        s[j + 1] = temp;
      }
    }
  }
         for (int i = n/2; i < n; i++){

    for (int j = 0; j < n- 1; j++){
      if (s[j] > s[j + 1]){ 

        int temp = s[j];
        s[j] = s[j + 1];
        s[j + 1] = temp;
      }
    }
  }
  
  
         
    }
   
      return 0;



}