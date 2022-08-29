#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
class rectangle{
  private:
  int length;
  int breadth;
  public:
  // constructor
   rectangle();
   rectangle(int l,int b);
   rectangle(rectangle &r);
   // accesor
   int getLength()
   {
       return length; // inline
   }
   int getBreadth()
   {
       return breadth; // inline not complex
   }
   // mutator
   void setLength(int l);
   void setBreadth(int b);
   // 
   int area();
   int  perimeter();
   bool isSquare();
   // clearance of obects
   ~rectangle();





};

int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      rectangle r1(10,10);
      cout<<r1.area()<<endl;
      if(r1.isSquare())
      {
          cout<<"yes"<<endl;


      }
      else
      cout<<"no";

      return 0;

 
}
// desturctor is called automaticllay after the destruction of rectangle class
rectangle :: rectangle()
{
    length=1;
    breadth=1;
}
rectangle :: rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
rectangle:: rectangle(rectangle &r)
{
    length=r.length;
    breadth=r.breadth;

}
void rectangle:: setLength(int l)
{
    length=l;
}
void rectangle:: setBreadth(int b)
{
    breadth=b;
}
int rectangle:: area()
{
    return length*breadth;
}
int rectangle:: perimeter()
{
    return 2*(length+breadth);
}
bool rectangle:: isSquare()
{
    return length==breadth;
}
rectangle:: ~rectangle()
{
    cout<<"rectangle destroyed";
}

