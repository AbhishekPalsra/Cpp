#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
class rectangle{
    public:
    int length;
    int breadth;
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
      rectangle r;
      rectangle *p; // pointer in stack
      p=&r;
    //   r.length=10; . operator is used to acees members of a objects
      p->length =10;  // -> operator is used to accesss members using pinters
      p->breadth=5;
      cout<<p->area();




      return 0;



}