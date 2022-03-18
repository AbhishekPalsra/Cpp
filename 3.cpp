#include<iostream>
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
using namespace std;  // we using function present in under std namespace
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
    int a,b,c; // we cant use variable before declaring them
    // cout<<"Enter two numbers\n"; // no need to write std:: as we already mentioned
    std::cin>>a>>b;
    c=a+b; // assignment a+b to c   
    cout<<"Adiition is "<<c<<endl;





    return 0;

     



}
