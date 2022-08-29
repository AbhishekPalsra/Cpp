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
    // complexx operator+(complexx c)
    // {
    //     complexx temp;
    //     temp.a=a+c.a;
    //     temp.b=b+c.b;
    //     return temp;
    // }

    // now we can use + as operator
    friend complexx operator+(complexx c1,complexx c2); // operator function is a friendfunction here as it take both the c1 and c2 as parameters
    // function is not called upon either on c1 or c2
    
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
      complexx c2(0,0);
      complexx c3;
      // c3=c1.add(complex c2);
      c3=c1+c2;
      c3.display();
      
     




      return 0;



}
// friend function need to define outside the class without using scope reslution
complexx operator+(complexx c1,complexx c2) // no scene of copy
{
    complexx t;
    t.a=c1.a+c2.a;
    t.b=c1.b+c2.b;
      return t;
}