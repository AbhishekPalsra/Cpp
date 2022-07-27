#include<bits/stdc++.h>
using namespace std;
class rectangle // classes are used for defining user defined datatype
{
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
}; // no memory is oocupied
int main()
{
    rectangle r1,r2; // r1 and r2 are objects (variables) occupy memory in heap ..only data occupies memory not functions
    r1.length=10;
    r1.breadth=20; // we cannot accces the data as eveytyhing is private so we user public keyword
    cout<<r1.area()<<endl;
    r2.length=15;
    r2.breadth=20;
    cout<<r2.area();
    return 0;

}