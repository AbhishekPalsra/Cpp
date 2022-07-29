#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
class rectangle{
    private:
    int length;
    int breadth;
    public:
    // constructor
    rectangle(int length,int breadth)
    {
        this->length=length;
        // this represent this is a member of a class 
        // without actual length will not change
        // this pointer is used too remove the ambiquity bw the class data members and function parameters
        this->breadth=breadth;
    
    }
    int area()
    {
        return length*breadth;
    }


};
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      // this pointer
      rectangle r1(10,5);
      cout<<r1.area();




      return 0;



}