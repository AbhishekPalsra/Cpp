#include<bits/stdc++.h>
using namespace std;
class complexx
{
    int real;
    int imaginary;
    public:
    complexx(int r=0,int i=0)
    {
        real=r;
        imaginary=i;
    }
    void display()
    {
        cout<<real<<"+i"<<imaginary<<endl;
    }
    friend ostream & operator<<(ostream &out,complexx &c);

};
ostream & operator<<(ostream &out,complexx &c)
{
    out<<c.real<<"+i"<<c.imaginary;
    return out;
} 
int main()

{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
        complexx c(3,4);
    // c.display();
    // cout<<c; this will not display the complex number

    // we need to overload the << operator 
     cout<<c<<endl;; // cout is object c is object both are overloaded to << operator
     operator<<(cout,c);
     // now the << is overloaded
     // scope resolution operator cannot be overloaded



}