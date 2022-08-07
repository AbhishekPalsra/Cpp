#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
class rectangle{
  // by defualy everything is private
  int l; // initially there are garbage value
  int b;
  public:
  int area()
  {
      return l*b;
  }
  int peri()
  {
      return 2*(l+b);
  }
  void setlength(int length) // mutator function
  {
      if(length>0)
      l=length;
      else
      l=0;
      
  }
  void setbreadth(int breadth) // mutator function
  {
      if(breadth>0)
      b=breadth; 
      else
      b=0;
  }
  int getlength() // accessor functions
  {
      return l;
  }
  int getbreadth() // accessor functions
  {
      return b;
  }


};
int main()
{
    #ifndef ONLINE_JUDGE //if the identifier specified in not defined as a macros, the line of code immediealy after this passed to the complier
    // condtional compilation
     // #ifdef  if the idetifier specified is mentioned then blocks of ocde will execute !!!!
    // #ifdef is opposite to #ifndef
    // #undef _____  undefine the existing macros
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
   
    // data in classes shidnt be made public as they can be mishandled
    // user may give wrong input then wrong outputs
    // classes is blamed for giving wrong output
    // data is made private and functions are made public
    // so we cannot access dataa directly we change it using function given
   rectangle r;
//    r.l=90; inaccesible
      r.setlength(15);
      r.setbreadth(10);
      cout<<r.area()<<endl;
      cout<<r.getlength()<<endl;




      return 0;



}