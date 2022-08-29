#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
class Rational
{
       int p;
       int q;
       public:
       Rational()
       {
           p=1;
           q=1;
       }
       Rational(int p,int q)
       {
           this->p=p;
           this->q=q;
       }
       Rational(Rational &r)
       {
           this->p=r.p;
           this->q=r.q;

       }
       int getP()
       {
           return p;
       }
       int getQ()
       {
           return q;
       }
       void setP(int p)
       {
           this->p=p;
       }
       void setQ(int q)
       {
           this->q=q;
       }
       Rational operator+(Rational r)
       {
           Rational temp;
           temp.p=p*r.q+q*r.p;
           temp.q=q*r.q;
           return temp;

       }
       friend ostream & operator<<(ostream &os, Rational&r);
       



};
ostream & operator<<(ostream &os, Rational&r)
{
    os<<r.p<<"/"<<r.q<<endl;
    return os;
}

int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
    Rational r1(3,4);
    Rational r2(2,5);
    Rational r3;
    r3=r1+r2;
    cout<<r3;

    

      return 0;



}