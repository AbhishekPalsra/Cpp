#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      char x=7;
      char y;
      char u;
      y= x<<1; //  bits are shifted to LHS andx= x* 2^1
      // y=x<<i; left shif:: t bits are shifted to lhs by i units and x=x*2^i;
      char z;
      z= x>>1; 
                       // 00000111  ----> 7
           u= ~x;     //  11111000  ----> ~7     
                      //-ve number in cpp are store in 2's compliment
                      //  00000111
                      //         1 
                      //  00001000     ---> 8 & sign is already decided // -8

      // z=x>>1; right shift :: bits are shifted to rhs by i units and x= x/2^i;
      cout<<(int)y<<endl<<(int)z<<endl<<(int)u;



      return 0;


}