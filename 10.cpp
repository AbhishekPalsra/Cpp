#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      // ax2+bx+c;
      int a,b,c;
      cin>>a>>b>>c;
      float rootOne;
      float rootTwo;
      if(b*b -4*a*c <0) // imaginary roots
      {
        rootTwo= 0;
        rootOne=0;
      }
      else
      {
      rootOne= (float)(-b+ sqrt(pow(b,2)-4*a*c))/(2*a) ; //used type casting here
      rootTwo=  (float)(-b- sqrt(pow(b,2)-4*a*c))/(2*a) ;
      }
      cout<<"Roots are "<<rootOne<<" and "<<rootTwo<<endl;



      return 0;


}