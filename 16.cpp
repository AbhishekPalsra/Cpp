#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//  #define hi 0
// const int hi =0;
// enum is used to define group of const under one name
enum day
{
    mon,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
}; // 0 1 2 3 4 5 6
enum sex
{
    male=1,
    female
};
enum name
{
    abhi=10,
    shek,wele
};
enum deptt
{
    cs,ece
};
int main()
{
    day d;
    
    // d can be any of mon/tue/....
    d=tue;

    // this operation on an enumerated type requires an applicable user-defined operator function",

    // mon++;
    // wrong we cant change them  d++;
    cout <<d<<endl;
    sex s;
    s=female;
    cout<<s<<endl;
    cout<<female<<endl;
    name y;
    y=shek;
    cout<<y<<endl;
    cout<<shek<<endl;


    return 0;


    

    
}