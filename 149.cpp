#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
struct demo{
    int x;
    int y;
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }


};
// struct in c can onl have data members inside it
// in c++ strcut can  have datamembers..  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
  demo d;
  d.x=10;
  d.y=20;
  d.display();


      return 0;


  // the diff bw class and structure is structure members are public whereas class members are private by defualt
}