#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
class rectangle{
    private:
    int l;
    int b;
    public:
    int area()
    {
        return l*b;
    }
    int perimeter();
};
// int perimeter() // gives error as its outside the cope of the function
// {
//     return 2*(l+b);
// }
int rectangle::perimeter()
{
    return 2*(l+b);
}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      rectangle r1;
      cout<<r1.area();
      cout<<r1.perimeter();
      // area function is just like the washing machine at home --- inline function :; shudnt have complex logic
      // peri function is just like laundary -- 
      // its a good practice to define function outside class using scope resoltuon


      return 0;



}