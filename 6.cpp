#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      unsigned char u;
      char x;
      int y;
      unsigned int o;
      float z;
      long w;
      double e; // more precision than long
      long double r;
      cout<<sizeof(u)<<endl ; // size taken by _ in memory
      cout<<"0"<<" "<<UCHAR_MAX; // 
      cout<<sizeof(x)<<endl;
      cout<<CHAR_MIN<<" "<<CHAR_MAX<<endl; // max and min value it can take

      cout<<sizeof(y)<<endl;
      cout<<INT_MIN<<" "<<INT_MAX<<endl;

      cout<<sizeof(o)<<endl;

      cout<<"0 "<<UINT_MAX<<endl;
      cout<<sizeof(z)<<endl;
      cout<<FLT_MIN<<" "<<FLT_MAX<<endl;

     

      

       

      cout<<sizeof(w)<<endl;
      cout<<LONG_MIN<<" "<<LONG_MAX<<endl;

      cout<<sizeof(e)<<endl;
      cout<<DBL_MIN<<" "<<DBL_MAX<<endl;
    
      cout<<sizeof(r)<<endl;
      cout<<LDBL_MIN<<" "<<LDBL_MAX<<endl;
      
  




      return 0;


}