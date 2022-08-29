#include<iostream>

using namespace std;  
class Base
{
    public:
    Base()
    {
        cout<<"non param base"<<endl;
    }
    Base(int x)
    {
        cout<<"Param base"<<x<<endl;
    }

};
class Derived :public Base{
    public:
    Derived()
    {
        cout<<"non param derived"<<endl;
    }
    Derived(int y)
    {
      cout<<"param derived"<<y<<endl;

    }
     Derived(int x,int y) : Base(x) // to also paass base parameter to the derived class we us this
    {
      cout<<"param derived"<<y<<endl;

    }






};

int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
    // constructor inheritance
    // whenever you are creating an object of derived class
    // first  constructor of base class is executed then contructor of derived class is executed
      
      Derived d; // 1st non param base 2nd non param derived
      Derived e(10); // 1st non param base 2nd param derived
      Derived f(20,10); 


      return 0;



}