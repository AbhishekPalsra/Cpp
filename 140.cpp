#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
class rectangle{
    public:
    int l;
    int b;
    int area()
    {
        return l*b;
    }
    int peri()
    {
        return 2*(l+b);
    }


};
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      
   
      // rectangle r // obj inn stack
      rectangle *p;    //objects in created in heap
      p=new rectangle; // p will be pinting to obj1 in heap
      rectangle *q=new rectangle; // q will be pointing to obj2 in heap
      p->l=10;
      p->b=15;
      q->l=15;
      q->b=10;
      cout<<q->area()<<endl;
      cout<<p->area();

      






      return 0;



}