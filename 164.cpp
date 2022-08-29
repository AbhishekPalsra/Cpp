#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();

};
class Cuboid: public Rectangle
{
   int height;
   public:
   Cuboid(int h)
   {
       height=h;
   }
   int getHeight()
   {
       return height;
   }
   void setHeight(int h)
   {
       height=h;
   }
   int volume()
   {
       return getLength()*getBreadth()*height; // length and breadth are private members so we use accesor function
   }






};

int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
     Cuboid c(5);
     cout<<c.volume()<<endl;
     c.setLength(6);
     c.setBreadth(10);
     cout<<c.volume()<<endl;

      return 0;



}
Rectangle:: Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle:: Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
Rectangle:: Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void Rectangle:: setLength(int l)
{
    length=l;
}
void Rectangle:: setBreadth(int b)
{
    breadth=b;
}
int Rectangle:: area()
{
    return length*breadth;
}
int Rectangle:: perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle:: isSquare()
{
    return length==breadth;
}
Rectangle:: ~Rectangle()
{
    cout<<"rectangle is destroyed"<<endl;
}
