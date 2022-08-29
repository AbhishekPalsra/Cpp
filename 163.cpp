#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
class Base
{
    public:
    int x;
    void show()
    {
        cout<<x<<endl;
    }


};
class Derived :public Base
{
    public:
    int y;
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }

    


};
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      // inheritance
      // a new model of cr canbe derived from the previos car with adding extra features
      // cuboid will inherit from rectnagle
      Base b;
      b.x=10;
    b.show();
    Derived d;
    d.x=19;
    d.y=100;
    d.display();
    d.show();
    // a dervied class gets all things from the base class datatype and mem unction also
    



      return 0;



}