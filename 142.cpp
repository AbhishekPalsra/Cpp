#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
class rectangle{
    int length;
    int breadth;
    public:
    // constructor have same name as class name and cannot have return type
    // rectangle()  non parameterized function
    // {
    //     l=1;
    //     b=1;
    // } no need as downc constructor work as same
    rectangle(int l=0,int b=0) //default arguementz also work for null argyment passed
    {
        // l=l;
        // b=b; error there so we better call setlength and set breadth functions
        setLength(l);
        setBreadth(b);
    }
    rectangle(rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }
    void setLength(int l)
    {
        if(l>0)
        {
          length=l;
        }   
        else
        {
            length=1;
        }

    }
      void setBreadth(int b)
    {
        if(b>0)
        {
          breadth=b;
        }   
        else
        {
            breadth=1;
        }

    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;

    }
    int perimeter()
    {
        return 2*(length+breadth);

    }

    


};
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      // Constructors --- when we create an object its data inital value is garbage but this not make sense.
      // rectangle r1(l,b) pass value at time of creating function only
      //rectangle r1; // initial vaalue will be garbage not make sense // default construtor
      // constructor is already provided by the complier
      // or u can create one 
      rectangle r1;  // defualt constrctor which create the object if any constructor is not defined
      cout<<r1.area()<<endl;
      rectangle r2(10,5); // 
      cout<<r2.area()<<endl;
      rectangle r3(r2); // copy contructor
      cout<<r3.area()<<endl;





      return 0;



}