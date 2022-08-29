#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
// operator overloading too add 2 matrix class
class complexx  // a+ib
{
    private: 
    int a;
    int b;
    public:
    complexx(int a=0,int b=0) // constructor
    {
        this->a=a;
        this->b=b;
    }
    // complex add(complex c) // add function
    // {
    //     complex temp;
    //     temp.a=a+c.a; // a means a of object upon which function is called
    //     temp.b=b+c.b;
    //     return temp;
    // }
    //now we convert add function to a parameter
    complexx operator+(complexx c)
    {
        complexx temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    // now we can use + as operator
    void display()
    {
        cout<<a<<"+i"<<b<<endl;
    }

};
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

      complexx c1(2,4);
      complexx c2(8,0);
      complexx c3;
      // c3=c1.add(complex c2);
      c3=c1+c2;
      c3.display();
      
     




      return 0;



}